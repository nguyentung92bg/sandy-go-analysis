/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<PopBubble>d__24$$MoveNext
bool Dino_BusSand_App_UI_StreakRatePanel__PopBubble_d__24__MoveNext (Dino_BusSand_App_UI_StreakRatePanel__PopBubble_d__24_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<PopBubble>d__24$$MoveNext
   bool Dino_BusSand_App_UI_StreakRatePanel__PopBubble_d__24__MoveNext
   (Dino_BusSand_App_UI_StreakRatePanel__PopBubble_d__24_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakRatePanel__PopBubble_d__24__MoveNext_21e5ae4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000004f9bbcd & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bbcd = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  fVar6 = _UNK_00e20390;
  if (*(int *)(param_1 + 0x10) == 1) {
                    /* try { // try from 022e5b40 to 023e5b4b has its CatchHandler @ 022e4768 */
                    /* catch() { ... } // from try @ 022e5b34 with catch @ 022e5b48 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5d54 with catch @ 022e5b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 022e5dbc with catch @ 022e5b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 022e5dfc with catch @ 022e5b4c
                        */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(float *)(param_1 + 0x28) < fVar6) goto LAB_022e5b58;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
                    /* try { // try from 022e5b34 to 023e5b3f has its CatchHandler @ 022e5b48 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_022e5b58:
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      fVar7 = *(float *)(param_1 + 0x28);
      fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar7 = fVar7 + fVar6;
      lVar5 = *(long *)(param_1 + 0x20);
      *(float *)(param_1 + 0x28) = fVar7;
                    /* try { // try from 022e5b98 to 023e5ba3 has its CatchHandler @ 022e5dc8 */
      if (lVar5 != 0) {
        fVar7 = fVar7 / _UNK_00e20390;
        fVar6 = 1.0;
        if (fVar7 <= 1.0) {
          fVar6 = fVar7;
        }
        fVar8 = -1.0;
        if (0.0 <= fVar7) {
          fVar8 = fVar6 + -1.0;
        }
        fVar6 = (float)func_0x049b5300(fVar8,0x40400000);
                    /* try { // try from 022e5bd0 to 023e5be7 has its CatchHandler @ 022e5ddc */
                    /* try { // try from 022e5c14 to 023e5c97 has its CatchHandler @ 022e5dd8 */
        fVar6 = (fVar8 * fVar8 * _UNK_00e20090 + fVar6 * _UNK_00e20a0c + 1.0) * _UNK_00e20994 +
                _UNK_00e207cc;
        UnityEngine_Transform__set_localScale_43d1be0(fVar6,fVar6,0x3f800000,lVar5,0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_022e5cc4;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar5 == 0) {
LAB_022e5cc4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 022e5ca0 to 023e5cab has its CatchHandler @ 022e5dc0 */
    lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
               *(undefined4 *)(lVar3 + 0x14),lVar5,0);
  }
  return 0;
}

