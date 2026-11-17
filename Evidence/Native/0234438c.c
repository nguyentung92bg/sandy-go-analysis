/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$add_PurchasedInGame
void Dino_BusSand_App_Meta_PassportFeature__add_PurchasedInGame (System_Action_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$add_PurchasedInGame
   void Dino_BusSand_App_Meta_PassportFeature__add_PurchasedInGame (System_Action_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__add_PurchasedInGame_224438c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04caef48;
  if ((bRam0000000004f9bf32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caef48);
    bRam0000000004f9bf32 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04caa458;
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  do {
    plVar5 = (long *)System_Delegate__Combine_4872324(lVar4,param_1,0);
                    /* try { // try from 02344408 to 02444413 has its CatchHandler @ 0234494c */
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != *(long *)puVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 02344428 to 0244442f has its CatchHandler @ 02344944 */
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
                    /* try { // try from 02344440 to 0244444f has its CatchHandler @ 02344958 */
    lVar6 = FUN_0216aff4(*(long *)(lVar6 + 0xb8) + 0x10,plVar5,lVar4);
    bVar3 = lVar6 != lVar4;
    lVar4 = lVar6;
  } while (bVar3);
                    /* try { // try from 02344454 to 0244445f has its CatchHandler @ 02344940 */
  return;
}

