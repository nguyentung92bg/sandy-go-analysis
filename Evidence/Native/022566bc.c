/* IL2CPP: Dino.BusSand.App.QaPilot$$get_IgnoresNoAds
bool Dino_BusSand_App_QaPilot__get_IgnoresNoAds (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot$$get_IgnoresNoAds
   bool Dino_BusSand_App_QaPilot__get_IgnoresNoAds (const MethodInfo* method); */

bool Dino_BusSand_App_QaPilot__get_IgnoresNoAds_21566bc(void)

{
  undefined *puVar1;
  bool bVar2;
  
                    /* try { // try from 022566c8 to 023566d3 has its CatchHandler @ 02256900 */
  if ((bRam0000000004f9b7e6 & 1) == 0) {
                    /* try { // try from 022566d4 to 023566db has its CatchHandler @ 0225690c */
    FUN_02132f7c(PTR_DAT_04cab958);
                    /* try { // try from 022566dc to 02356707 has its CatchHandler @ 0225655c */
    bRam0000000004f9b7e6 = 1;
  }
  puVar1 = PTR_DAT_04cab958;
  if (cRam0000000004f9b88c == '\0') {
    FUN_02132f7c(PTR_DAT_04cab958);
                    /* try { // try from 02256708 to 02356717 has its CatchHandler @ 02256910 */
    cRam0000000004f9b88c = '\x01';
  }
                    /* try { // try from 02256718 to 02356727 has its CatchHandler @ 0225655c */
  if (**(char **)(*(long *)puVar1 + 0xb8) == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = (*(char **)(*(long *)puVar1 + 0xb8))[1] != '\0';
                    /* try { // try from 02256728 to 023567e7 has its CatchHandler @ 0225690c */
  }
  return bVar2;
}

