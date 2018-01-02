name := "life-model"
organization := "rs.high.life"
version := "0.0.2-SNAPSHOT"
scalaVersion := "2.12.3"

// dependency versions
lazy val versions = new {

}

// dependencies
libraryDependencies ++= Seq(
  "com.google" %% "flatbuffers" % "1.7.1"
)


// publish settings
val artifactory = "https://highrise.jfrog.io/highrise"

resolvers ++= Seq(
  Resolver.mavenLocal,
  "Highrise" at s"$artifactory/lib"
)

publishTo := {
  if (isSnapshot.value) {
    Some("Highrise" at s"$artifactory/lib")
  }
  else {
    val url = s"$artifactory/lib;build.timestamp=" + new java.util.Date().getTime
    Some("Highrise" at url)
  }
}

credentials += Credentials("Artifactory Realm", "highrise.jfrog.io", "deploy", "AP2JackF6ejSS1JtgQsHfb5wufQ")