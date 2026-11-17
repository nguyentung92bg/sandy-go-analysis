/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass15_0$$<Finish>b__0
void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0___Finish_b__0 (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass15_0$$<Finish>b__0
   void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0___Finish_b__0
   (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass15_0___Finish_b__0_2325dec
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 02425e38 to 02525e3f has its CatchHandler @ 02425f7c */
    FUN_02132f7c(PTR_DAT_04cb8cd8);
    bRam0000000004f9c5e1 = 1;
  }
                    /* try { // try from 02425e48 to 02525e4f has its CatchHandler @ 02425f78 */
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 02425e6c to 02525e77 has its CatchHandler @ 02425f68 */
    plVar5 = *(long **)(param_4 + 0x10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 02425e78 to 02525e83 has its CatchHandler @ 02425f6c */
    if (*(char *)((long)plVar5 + 0x2c) == '\0') {
                    /* try { // try from 02425e98 to 02525ea3 has its CatchHandler @ 02425f64 */
      plVar10 = *(long **)(param_4 + 0x18);
      uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                    /* try { // try from 02425eb0 to 02525f13 has its CatchHandler @ 02425f70 */
      lVar12 = *(long *)(param_4 + 0x28);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(lVar12,param_4,*(undefined8 *)PTR_DAT_04cb8cd8,0);
        *(long *)(param_4 + 0x28) = lVar12;
        thunk_FUN_02134474((long *)(param_4 + 0x28),lVar12);
      }
                    /* try { // try from 02425f14 to 02525f57 has its CatchHandler @ 02425ae8 */
      if ((bRam0000000004f9c298 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caf5d8,lVar12,0,0);
        FUN_02132f7c(PTR_DAT_04caf7a0);
        FUN_02132f7c(PTR_DAT_04caca60);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004f9c298 = 1;
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      lVar11 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
      if ((plVar10 != (long *)0x0) && ((uVar4 & 1) == 0)) {
        lVar7 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04caf5d8) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_023a8e4c;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04caf5d8,0);
LAB_023a8e4c:
        iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if (iVar2 != 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar11,0);
          if ((uVar4 & 1) != 0) {
            uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
            System_Collections_Generic_List_KeyValuePair_int__long_____ctor_39650e8
                      (uVar9,plVar10,*(undefined8 *)PTR_DAT_04caf7a0);
            lVar12 = Dino_BusSand_App_UI_CommerceRewardFly__Run_22a8f20
                               (uVar13,param_2,param_3,lVar11,uVar9,lVar12,0);
            if (lVar12 == 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
              uVar6 = thunk_FUN_0216e89c();
              uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
              System_NullReferenceException___ctor_483267c(uVar6,uVar9,0);
            }
            else {
              uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
              if ((uVar4 & 1) != 0) {
                if ((bRam0000000004fa84ef & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf7890);
                  bRam0000000004fa84ef = 1;
                }
                if (lVar11 != 0) {
                  lVar7 = *(long *)(lVar11 + 0x10);
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar11,0);
                  }
                  if (pcRam0000000004fa8560 == (code *)0x0) {
                    pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8560)(lVar7,lVar12);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              thunk_FUN_021985a8(PTR_DAT_04caa3a8);
              uVar6 = thunk_FUN_0216e89c();
              uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
              System_ArgumentException___ctor_47b660c(uVar6,uVar9,0);
            }
            uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar6,uVar9);
          }
        }
      }
      if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023a8f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar12 + 0x18))(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
        return;
      }
      return;
    }
  }
                    /* try { // try from 02425e8c to 02525e97 has its CatchHandler @ 02425f60 */
  return;
}

