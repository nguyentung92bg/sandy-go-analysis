/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<ScaleTo>d__84$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_d__84__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_d__84_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<ScaleTo>d__84$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_d__84__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_d__84_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_BattleRoyaleScenePanel__ScaleTo_d__84__MoveNext_21988d4
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam0000000004f9b9da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9da = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(param_4 + 0x10) == 1) {
    fVar5 = *(float *)(param_4 + 0x58);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    fVar7 = (float)*(undefined8 *)(param_4 + 0x2c);
    fVar6 = (float)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20);
    fVar5 = _UNK_00e1fea0;
    if (fVar6 * fVar6 + *(float *)(param_4 + 0x28) * *(float *)(param_4 + 0x28) + fVar7 * fVar7 <
        _UNK_00e1fea0) {
      if (*(long *)(param_4 + 0x20) == 0) goto LAB_02298b1c;
      uVar4 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_4 + 0x20),0);
      *(undefined4 *)(param_4 + 0x28) = uVar4;
      *(float *)(param_4 + 0x2c) = fVar5;
      *(undefined4 *)(param_4 + 0x30) = param_3;
    }
    if (*(float *)(param_4 + 0x34) < 0.0) {
      *(undefined4 *)(param_4 + 0x34) = *(undefined4 *)(param_4 + 0x38);
    }
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_02298b1c;
    uVar4 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(param_4 + 0x20),0);
    *(undefined4 *)(param_4 + 0x40) = uVar4;
    *(float *)(param_4 + 0x44) = fVar5;
    fVar5 = 0.0;
    *(undefined4 *)(param_4 + 0x48) = param_3;
    uVar3 = NEON_rev64(*(undefined8 *)(param_4 + 0x34),4);
    *(undefined4 *)(param_4 + 0x58) = 0;
    *(undefined4 *)(param_4 + 0x54) = *(undefined4 *)(param_4 + 0x30);
    *(ulong *)(param_4 + 0x4c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20) *
                  (float)((ulong)uVar3 >> 0x20),
                  (float)*(undefined8 *)(param_4 + 0x28) * (float)uVar3);
  }
  if (fVar5 < *(float *)(param_4 + 0x3c)) {
    uVar3 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* try { // try from 02298a14 to 02398a33 has its CatchHandler @ 02298a14
                       catch() { ... } // from try @ 02298a14 with catch @ 02298a14
                       catch() { ... } // from try @ 02298a48 with catch @ 02298a14 */
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      fVar7 = *(float *)(param_4 + 0x58);
                    /* try { // try from 02298a34 to 02398a47 has its CatchHandler @ 02298a58 */
      fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar7 = fVar7 + fVar5;
      *(float *)(param_4 + 0x58) = fVar7;
      if (*(long *)(param_4 + 0x20) != 0) {
                    /* try { // try from 02298a48 to 02398a6b has its CatchHandler @ 02298a14 */
                    /* catch() { ... } // from try @ 02298a34 with catch @ 02298a58 */
        fVar7 = fVar7 / *(float *)(param_4 + 0x3c);
        fVar5 = 1.0;
        if (fVar7 <= 1.0) {
          fVar5 = fVar7;
        }
                    /* try { // try from 02298a6c to 02398a8f has its CatchHandler @ 02298a6c
                       catch() { ... } // from try @ 02298a6c with catch @ 02298a6c
                       catch() { ... } // from try @ 02298a98 with catch @ 02298a6c */
        fVar6 = 0.0;
        if (0.0 <= fVar7) {
          fVar6 = fVar5;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar6) {
          fVar5 = fVar6;
        }
        fVar6 = (float)*(undefined8 *)(param_4 + 0x40);
        fVar7 = (float)((ulong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
                    /* try { // try from 02298a90 to 02398a97 has its CatchHandler @ 02298abc */
        fVar7 = fVar7 + ((float)((ulong)*(undefined8 *)(param_4 + 0x4c) >> 0x20) - fVar7) * fVar5;
                    /* try { // try from 02298a98 to 02398ad7 has its CatchHandler @ 02298a6c */
        UnityEngine_Transform__set_localScale_43d1be0
                  (CONCAT44(fVar7,fVar6 + ((float)*(undefined8 *)(param_4 + 0x4c) - fVar6) * fVar5),
                   fVar7,*(float *)(param_4 + 0x48) +
                         (*(float *)(param_4 + 0x54) - *(float *)(param_4 + 0x48)) * fVar5,
                   *(long *)(param_4 + 0x20),0);
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
                    /* catch() { ... } // from try @ 02298a90 with catch @ 02298abc */
      }
      goto LAB_02298b1c;
    }
  }
  uVar3 = *(undefined8 *)(param_4 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* try { // try from 02298ad8 to 02398b07 has its CatchHandler @ 02298ad8
                       catch() { ... } // from try @ 02298ad8 with catch @ 02298ad8
                       catch() { ... } // from try @ 02298b14 with catch @ 02298ad8 */
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_4 + 0x20) == 0) {
LAB_02298b1c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(param_4 + 0x4c),*(undefined4 *)(param_4 + 0x50),
               *(undefined4 *)(param_4 + 0x54),*(long *)(param_4 + 0x20),0);
  }
                    /* try { // try from 02298b08 to 02398b13 has its CatchHandler @ 02298b34 */
                    /* try { // try from 02298b14 to 02398b4f has its CatchHandler @ 02298ad8 */
  return 0;
}

