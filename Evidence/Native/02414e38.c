/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass33_0$$<OnAd>b__0
void Dino_BusSand_App_UI_WinPanel___c__DisplayClass33_0___OnAd_b__0 (Dino_BusSand_App_UI_WinPanel___c__DisplayClass33_0_o* __this, bool ok, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass33_0$$<OnAd>b__0
   void Dino_BusSand_App_UI_WinPanel___c__DisplayClass33_0___OnAd_b__0
   (Dino_BusSand_App_UI_WinPanel___c__DisplayClass33_0_o* __this, bool ok, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_WinPanel___c__DisplayClass33_0___OnAd_b__0_2314e38
               (long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000004f9c568 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    FUN_02132f7c(PTR_DAT_04cac5c0);
                    /* try { // try from 02414e7c to 02514ec7 has its CatchHandler @ 02414fa4 */
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb83c8);
    FUN_02132f7c(PTR_DAT_04cb83d0);
    FUN_02132f7c(PTR_DAT_04cb2590);
    FUN_02132f7c(PTR_DAT_04cb83d8);
                    /* try { // try from 02414ed4 to 02514ed7 has its CatchHandler @ 02414fa8 */
    bRam0000000004f9c568 = 1;
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
                    /* try { // try from 02414ee8 to 02514eef has its CatchHandler @ 02414fa0 */
    *(undefined1 *)(lVar10 + 0x38) = 0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
    puVar4 = PTR_DAT_04caba50;
    if ((uVar5 & 1) != 0) {
      return;
    }
                    /* try { // try from 02414f18 to 02514f1f has its CatchHandler @ 02414f98 */
    if (*(long *)(param_1 + 0x10) != 0) {
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x2c) != '\0') {
        return;
      }
      if ((param_2 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cabaa8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Ads__ToastRewardedFail_216ab48(0);
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
          if ((uVar5 & 1) == 0) {
            return;
          }
          lVar10 = *(long *)(param_1 + 0x10);
          if (lVar10 != 0) {
            *(undefined1 *)(lVar10 + 0x90) = 1;
            lVar7 = Dino_BusSand_App_UI_WinPanel__NeedleLoop_23135dc
                              (*(undefined4 *)(lVar10 + 0x94),lVar10);
            uVar5 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar10,0,0);
            if ((uVar5 & 1) == 0) {
              return;
            }
            if (lVar7 == 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
              uVar8 = thunk_FUN_0216e89c();
              uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
              System_NullReferenceException___ctor_483267c(uVar8,uVar11,0);
            }
            else {
              uVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
              if ((uVar5 & 1) != 0) {
                if ((bRam0000000004fa84ef & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf7890);
                  bRam0000000004fa84ef = 1;
                }
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar9 = *(long *)(lVar10 + 0x10);
                if (lVar9 != 0) {
                  if (pcRam0000000004fa8560 == (code *)0x0) {
                    pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8560)(lVar9,lVar7);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
              }
              thunk_FUN_021985a8(PTR_DAT_04caa3a8);
              uVar8 = thunk_FUN_0216e89c();
              uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
              System_ArgumentException___ctor_47b660c(uVar8,uVar11,0);
            }
            uVar11 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar8,uVar11);
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 02414f40 to 02514f53 has its CatchHandler @ 02414f88 */
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar10 = *(long *)puVar4;
                    /* try { // try from 02414f68 to 02514f6b has its CatchHandler @ 02414fac */
        if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* try { // try from 02414f6c to 02514f6f has its CatchHandler @ 02414f9c */
          thunk_FUN_0218fdac();
                    /* try { // try from 02414f70 to 02514f73 has its CatchHandler @ 02414f94 */
          lVar10 = *(long *)puVar4;
        }
                    /* try { // try from 02414f74 to 02514f77 has its CatchHandler @ 02414f90 */
                    /* try { // try from 02414f78 to 02514f7b has its CatchHandler @ 02414f8c */
                    /* try { // try from 02414f7c to 02514f7f has its CatchHandler @ 02414fa4 */
        if (**(long **)(lVar10 + 0xb8) != 0) {
                    /* try { // try from 02414f80 to 02514f83 has its CatchHandler @ 02414f84 */
                    /* catch() { ... } // from try @ 02414f80 with catch @ 02414f84
                       try { // try from 02414f84 to 02514fc3 has its CatchHandler @ 02414db8 */
          iVar1 = *(int *)(**(long **)(lVar10 + 0xb8) + 0x40);
                    /* catch() { ... } // from try @ 02414f40 with catch @ 02414f88 */
                    /* catch() { ... } // from try @ 02414f78 with catch @ 02414f8c */
          iVar2 = (*(int *)(param_1 + 0x18) + -1) * iVar1;
                    /* catch() { ... } // from try @ 02414f74 with catch @ 02414f90 */
                    /* catch() { ... } // from try @ 02414f70 with catch @ 02414f94 */
          if (0 < iVar2) {
                    /* catch() { ... } // from try @ 02414f18 with catch @ 02414f98 */
                    /* catch() { ... } // from try @ 02414f6c with catch @ 02414f9c */
                    /* catch() { ... } // from try @ 02414ee8 with catch @ 02414fa0 */
                    /* catch() { ... } // from try @ 02414e7c with catch @ 02414fa4
                       catch() { ... } // from try @ 02414f7c with catch @ 02414fa4 */
                    /* catch() { ... } // from try @ 02414e04 with catch @ 02414fa8
                       catch() { ... } // from try @ 02414ed4 with catch @ 02414fa8 */
            if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02414f68 with catch @ 02414fac */
              thunk_FUN_0218fdac();
            }
                    /* try { // try from 02414fc4 to 02514fdb has its CatchHandler @ 02415048 */
            Dino_BusSand_App_Meta_Profile__Add_2272578
                      (0x3e9,iVar2,*(undefined8 *)PTR_DAT_04cb2590,0);
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
                    /* try { // try from 02414fdc to 02515037 has its CatchHandler @ 02414db8 */
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
            if ((uVar5 & 1) != 0) {
              if ((*(long *)(param_1 + 0x10) == 0) ||
                 (lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar10 == 0))
              goto LAB_0241525c;
              Dino_BusSand_App_UI_KitTopBar__Hold_2283310(lVar10,(long)iVar2,0,0);
            }
            plVar6 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,4);
            puVar3 = PTR_DAT_04cb83c8;
            if (plVar6 != (long *)0x0) {
                    /* try { // try from 02415038 to 02515047 has its CatchHandler @ 02415048 */
                    /* catch() { ... } // from try @ 02414fc4 with catch @ 02415048
                       catch() { ... } // from try @ 02415038 with catch @ 02415048 */
                    /* try { // try from 0241504c to 0251504f has its CatchHandler @ 02415058 */
                    /* try { // try from 02415050 to 0251505b has its CatchHandler @ 02414db8 */
              if ((*(long *)PTR_DAT_04cb83c8 != 0) &&
                 (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb83c8,
                                              *(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
LAB_02415264:
                uVar11 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar11,0);
              }
                    /* catch() { ... } // from try @ 0241504c with catch @ 02415058 */
              if ((int)plVar6[3] != 0) {
                plVar6[4] = *(long *)puVar3;
                thunk_FUN_02134474();
                puVar3 = PTR_DAT_04ca9ac8;
                uStack_34 = *(undefined4 *)(param_1 + 0x18);
                lVar10 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
                if ((lVar10 != 0) &&
                   (lVar7 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
                goto LAB_02415264;
                if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
                  plVar6[5] = lVar10;
                  thunk_FUN_02134474(plVar6 + 5,lVar10);
                  puVar4 = PTR_DAT_04cb83d8;
                  if ((*(long *)PTR_DAT_04cb83d8 != 0) &&
                     (lVar10 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb83d8,
                                                  *(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
                  goto LAB_02415264;
                  if (2 < *(uint *)(plVar6 + 3)) {
                    plVar6[6] = *(long *)puVar4;
                    thunk_FUN_02134474();
                    iStack_38 = iVar2;
                    lVar10 = FUN_02133100(*(undefined8 *)(puVar3 + 0x48),&iStack_38);
                    if ((lVar10 != 0) &&
                       (lVar7 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar7 == 0)) goto LAB_02415264;
                    if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
                      plVar6[7] = lVar10;
                      thunk_FUN_02134474(plVar6 + 7,lVar10);
                      if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      Dino_BusSand_App_Analytics__Log_216d0c8
                                (*(undefined8 *)PTR_DAT_04cb83d0,plVar6,0);
                      if (*(long *)(param_1 + 0x10) != 0) {
                        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x39) = 1;
                        Dino_BusSand_App_UI_WinPanel__SpendButtons_23136c4();
                        lVar10 = *(long *)(param_1 + 0x10);
                        if (lVar10 != 0) {
                          uVar11 = Dino_BusSand_App_UI_WinPanel__CountUp_2313f7c
                                             (lVar10,iVar1,*(int *)(param_1 + 0x18) * iVar1);
                          Dino_BusSand_App_UI_UIPanel__Run_2200f98(lVar10,uVar11,0);
                          return;
                        }
                      }
                      goto LAB_0241525c;
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
          }
        }
      }
    }
  }
LAB_0241525c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

