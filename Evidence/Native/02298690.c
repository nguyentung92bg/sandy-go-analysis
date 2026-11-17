/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<PopIn>d__67$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__PopIn_d__67__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__PopIn_d__67_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<PopIn>d__67$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__PopIn_d__67__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__PopIn_d__67_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_BattleRoyaleScenePanel__PopIn_d__67__MoveNext_2198690(long param_1)

{
  undefined *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 022986a0 to 023986a7 has its CatchHandler @ 022986e4 */
                    /* try { // try from 022986a8 to 023986ff has its CatchHandler @ 022985b0 */
  if ((bRam0000000004f9b9d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9d9 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  fVar7 = _UNK_00e20390;
  if (*(int *)(param_1 + 0x10) == 1) {
                    /* catch() { ... } // from try @ 02298648 with catch @ 022986e8 */
                    /* catch() { ... } // from try @ 02298608 with catch @ 022986ec */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(float *)(param_1 + 0x28) < fVar7) goto LAB_02298704;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
                    /* catch() { ... } // from try @ 022985d8 with catch @ 022986e0 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* catch() { ... } // from try @ 022986a0 with catch @ 022986e4 */
LAB_02298704:
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      fVar8 = *(float *)(param_1 + 0x28);
                    /* try { // try from 02298734 to 02398737 has its CatchHandler @ 02298744 */
      fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      cVar2 = cRam0000000004f9b65e;
      fVar8 = fVar8 + fVar7;
      lVar6 = *(long *)(param_1 + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02298734 with catch @ 02298744
                        */
      *(float *)(param_1 + 0x28) = fVar8;
      if (cVar2 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        fVar8 = *(float *)(param_1 + 0x28);
        cRam0000000004f9b65e = '\x01';
      }
      uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
      fVar9 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x14);
      fVar7 = (float)Dino_BusSand_App_UI_BattleRoyaleUi__OutBack_219d0e4(fVar8 / _UNK_00e20390,0);
      if (lVar6 != 0) {
        UnityEngine_Transform__set_localScale_43d1be0
                  (((float)uVar5 + -0.3) * fVar7 + 0.3,
                   ((float)((ulong)uVar5 >> 0x20) + -0.3) * fVar7 + 0.3,(fVar9 + -1.0) * fVar7 + 1.0
                   ,lVar6,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_02298884;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar6 == 0) {
LAB_02298884:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
               *(undefined4 *)(lVar4 + 0x14),lVar6,0);
  }
  return 0;
}

