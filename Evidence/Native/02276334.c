/* IL2CPP: Dino.BusSand.App.Ads$$get_InstallDay
int32_t Dino_BusSand_App_Ads__get_InstallDay (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$get_InstallDay
   int32_t Dino_BusSand_App_Ads__get_InstallDay (const MethodInfo* method); */

int Dino_BusSand_App_Ads__get_InstallDay_2176334(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8de & 1) == 0) {
                    /* try { // try from 02276354 to 0237635f has its CatchHandler @ 022763ac */
    FUN_02132f7c(PTR_DAT_04cabaa8);
    bRam0000000004f9b8de = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02276374 to 0237637f has its CatchHandler @ 022763a4 */
  iVar2 = Dino_BusSand_App_Ads__DaysSinceInstall_21760c0();
                    /* try { // try from 02276380 to 023763cf has its CatchHandler @ 0227627c */
  return iVar2 + 1;
}

