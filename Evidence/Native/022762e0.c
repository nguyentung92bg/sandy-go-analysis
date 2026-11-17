/* IL2CPP: Dino.BusSand.App.Ads$$get_ActivateDay
int32_t Dino_BusSand_App_Ads__get_ActivateDay (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$get_ActivateDay
   int32_t Dino_BusSand_App_Ads__get_ActivateDay (const MethodInfo* method); */

int Dino_BusSand_App_Ads__get_ActivateDay_21762e0(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8dd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
                    /* try { // try from 0227630c to 02376317 has its CatchHandler @ 022763c0 */
    bRam0000000004f9b8dd = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  iVar2 = Dino_BusSand_App_Ads__DaysSinceInstall_21760c0();
  return iVar2 + 1;
}

