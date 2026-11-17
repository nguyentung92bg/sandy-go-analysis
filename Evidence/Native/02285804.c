/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<WaitItemEffect>d__14$$MoveNext
bool Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_d__14__MoveNext (Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_d__14_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.LevelEnterFlow.<WaitItemEffect>d__14$$MoveNext
   bool Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_d__14__MoveNext
   (Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_d__14_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_LevelEnterFlow__WaitItemEffect_d__14__MoveNext_2185804(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000004f9b953 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb20);
    bRam0000000004f9b953 = 1;
  }
  fVar5 = _UNK_00e20094;
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* catch() { ... } // from try @ 0228595c with catch @ 02285858 */
    if (*(int *)(lVar4 + 0x60) == *(int *)(param_1 + 0x28)) {
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(lVar4,uVar3,0);
      if ((uVar1 & 1) == 0) goto LAB_022858bc;
      uVar3 = 1;
    }
    else {
LAB_022858bc:
      *(undefined4 *)(param_1 + 0x30) = 0;
LAB_022858c0:
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      if (*(int *)(*(long *)PTR_DAT_04cacb20 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 022858e8 to 023858f3 has its CatchHandler @ 0228599c */
      uVar1 = Dino_BusSand_App_UI_LevelEnterFlow__Alive_233d020(uVar2,uVar3,0);
      if ((uVar1 & 1) == 0) goto LAB_02285928;
      fVar6 = *(float *)(param_1 + 0x30);
      fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      uVar3 = 2;
      *(float *)(param_1 + 0x30) = fVar6 + fVar5;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  else {
    if ((*(uint *)(param_1 + 0x10) == 2) &&
       (*(undefined4 *)(param_1 + 0x10) = 0xffffffff, *(float *)(param_1 + 0x30) < fVar5))
    goto LAB_022858c0;
LAB_02285928:
    uVar2 = 0;
  }
                    /* try { // try from 02285930 to 0238593b has its CatchHandler @ 02285988 */
  return uVar2;
}

