/* IL2CPP: Dino.BusSand.App.UI.KitBoosterButton$$Set
void Dino_BusSand_App_UI_KitBoosterButton__Set (Dino_BusSand_App_UI_KitBoosterButton_o* __this, int32_t st, int64_t count, int32_t unlockLevel, bool armed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.KitBoosterButton$$Set
   void Dino_BusSand_App_UI_KitBoosterButton__Set (Dino_BusSand_App_UI_KitBoosterButton_o* __this,
   int32_t st, int64_t count, int32_t unlockLevel, bool armed, const MethodInfo* method); */

void Dino_BusSand_App_UI_KitBoosterButton__Set_2288aac
               (long param_1,int param_2,long param_3,undefined4 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uStack_64;
  long lStack_58;
  
                    /* try { // try from 02388ab4 to 02488ad7 has its CatchHandler @ 02388508 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02388a84 with catch @ 02388ac0
                        */
                    /* try { // try from 02388ad8 to 02488aef has its CatchHandler @ 02388b44 */
  lStack_58 = param_3;
  if ((bRam0000000004f9c16a & 1) == 0) {
                    /* try { // try from 02388af0 to 02488b33 has its CatchHandler @ 02388508 */
    FUN_02132f7c(PTR_DAT_04cb5028);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb50c0);
                    /* try { // try from 02388b34 to 02488b43 has its CatchHandler @ 02388b44 */
    FUN_02132f7c(PTR_DAT_04cb50c8);
                    /* catch() { ... } // from try @ 02388ad8 with catch @ 02388b44
                       catch() { ... } // from try @ 02388b34 with catch @ 02388b44 */
    FUN_02132f7c(PTR_DAT_04cb50d0);
                    /* try { // try from 02388b48 to 02488b4b has its CatchHandler @ 02388b54 */
                    /* try { // try from 02388b4c to 02488b57 has its CatchHandler @ 02388508 */
    bRam0000000004f9c16a = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02388b48 with catch @ 02388b54
                        */
                    /* try { // try from 02388b58 to 02488caf has its CatchHandler @ 02388b58
                       catch() { ... } // from try @ 02388b58 with catch @ 02388b58
                       catch() { ... } // from try @ 02388d00 with catch @ 02388b58
                       catch() { ... } // from try @ 02388eb0 with catch @ 02388b58
                       catch() { ... } // from try @ 02388ed4 with catch @ 02388b58 */
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x20),0), lVar5 != 0
     )) {
    UnityEngine_GameObject__SetActive_43c1408(lVar5,param_2 != 0,0);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0),
       lVar5 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar5,param_2 == 0,0);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x30),0),
         lVar5 != 0)) {
        UnityEngine_GameObject__SetActive_43c1408(lVar5,param_2 != 0,0);
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x38),0),
           lVar5 != 0)) {
          UnityEngine_GameObject__SetActive_43c1408(lVar5,param_2 == 0,0);
          if ((*(long *)(param_1 + 0x60) != 0) &&
             (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
             puVar2 = PTR_DAT_04ca9c20, lVar5 != 0)) {
            UnityEngine_GameObject__SetActive_43c1408(lVar5,param_2 == 0,0);
            plVar10 = *(long **)(param_1 + 0x60);
            plVar6 = (long *)FUN_02133068(*(undefined8 *)puVar2,1);
            uStack_64 = param_4;
            lVar5 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_64);
            if (plVar6 != (long *)0x0) {
              if ((lVar5 != 0) &&
                 (lVar7 = thunk_FUN_0216e7a0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
                uVar8 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                FUN_021330e8(uVar8,0);
              }
              puVar3 = PTR_DAT_04cb50d0;
              puVar1 = PTR_DAT_04cb50c8;
              puVar2 = PTR_DAT_04cad330;
              if ((int)plVar6[3] == 0) {
LAB_02388f58:
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar6[4] = lVar5;
              thunk_FUN_02134474(plVar6 + 4,lVar5);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar8 = Dino_BusSand_App_UI_UiKit__T_2285e1c
                                (*(undefined8 *)puVar1,*(undefined8 *)puVar3,plVar6);
              if (plVar10 != (long *)0x0) {
                    /* try { // try from 02388cb0 to 02488cb7 has its CatchHandler @ 02388e90 */
                (**(code **)(*plVar10 + 0x518))(plVar10,uVar8,*(undefined8 *)(*plVar10 + 0x520));
                if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 02388ccc to 02488ccf has its CatchHandler @ 02388e84 */
                    /* try { // try from 02388cd0 to 02488cdf has its CatchHandler @ 02388e8c */
                  UnityEngine_GameObject__SetActive_43c1408
                            (*(long *)(param_1 + 0x40),param_2 == 2,0);
                  if (*(long *)(param_1 + 0x48) != 0) {
                    /* try { // try from 02388cf0 to 02488cff has its CatchHandler @ 02388e88 */
                    UnityEngine_GameObject__SetActive_43c1408
                              (*(long *)(param_1 + 0x48),param_2 == 3,0);
                    puVar1 = PTR_DAT_04ca9ae8;
                    if (*(long *)(param_1 + 0x50) != 0) {
                    /* try { // try from 02388d00 to 02488eab has its CatchHandler @ 02388b58 */
                      UnityEngine_GameObject__SetActive_43c1408
                                (*(long *)(param_1 + 0x50),param_2 == 1,0);
                      uVar8 = *(undefined8 *)(param_1 + 0x58);
                      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
                      if ((uVar9 & 1) != 0) {
                        plVar6 = *(long **)(param_1 + 0x58);
                        if (lStack_58 < 100) {
                          uVar8 = System_Int64__ToString_482e7e4(&lStack_58,0);
                        }
                        else {
                          uVar8 = *(undefined8 *)PTR_DAT_04cb50c0;
                        }
                        if (plVar6 == (long *)0x0) goto LAB_02388f54;
                        (**(code **)(*plVar6 + 0x518))
                                  (plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x520));
                      }
                      if ((-1 < *(long *)(param_1 + 0x68)) &&
                         (lStack_58 != *(long *)(param_1 + 0x68))) {
                        if (*(long *)(param_1 + 0x40) == 0) goto LAB_02388f54;
                        uVar9 = UnityEngine_GameObject__get_activeInHierarchy_43c1580
                                          (*(long *)(param_1 + 0x40),0);
                        if ((uVar9 & 1) != 0) {
                          if (*(long *)(param_1 + 0x40) == 0) goto LAB_02388f54;
                          uVar8 = UnityEngine_GameObject__get_transform_43c1048
                                            (*(long *)(param_1 + 0x40),0);
                          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)PTR_DAT_04cad4c0);
                          }
                          Dino_BusSand_App_UI_UiMotion__Punch_2283d78
                                    (_UNK_00e207cc,_UNK_00e207cc,uVar8,0,0);
                        }
                      }
                      *(long *)(param_1 + 0x68) = lStack_58;
                      if ((*(long *)(param_1 + 0x20) != 0) &&
                         (lVar5 = UnityEngine_Component__GetComponentsInChildren_object__26fa290
                                            (*(long *)(param_1 + 0x20),
                                             *(undefined8 *)PTR_DAT_04cb5028), lVar5 != 0)) {
                        uVar4 = *(uint *)(lVar5 + 0x18);
                        uVar11 = _UNK_00e208e8;
                        if ((param_5 & 1) == 0) {
                          uVar11 = 0x3f800000;
                        }
                        if (0 < (int)uVar4) {
                          lVar7 = 0;
                          do {
                            if (uVar4 <= (uint)lVar7) goto LAB_02388f58;
                            plVar6 = *(long **)(lVar5 + 0x20 + lVar7 * 8);
                            if (plVar6 == (long *)0x0) goto LAB_02388f54;
                            (**(code **)(*plVar6 + 0x2a8))
                                      (0x3f800000,0x3f800000,uVar11,0x3f800000,plVar6,
                                       *(undefined8 *)(*plVar6 + 0x2b0));
                            uVar4 = *(uint *)(lVar5 + 0x18);
                            lVar7 = lVar7 + 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02388ccc with catch @ 02388e84
                        */
                          } while ((int)lVar7 < (int)uVar4);
                        }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02388cf0 with catch @ 02388e88
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02388cd0 with catch @ 02388e8c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02388cb0 with catch @ 02388e90
                        */
                        uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_0218fdac(*(long *)puVar2);
                        }
                    /* try { // try from 02388eac to 02488eaf has its CatchHandler @ 02388ec8 */
                    /* try { // try from 02388eb0 to 02488ecb has its CatchHandler @ 02388b58 */
                        uVar4 = Dino_BusSand_App_UI_UiKit__IsBreathing_2288f68(uVar8);
                        if (((param_2 == 0) || (((param_5 ^ 1) & 1) != 0)) || ((uVar4 & 1) != 0)) {
                          if ((uVar4 & (param_5 ^ 1) & 1) != 0) {
                            uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac(*(long *)puVar2);
                            }
                            Dino_BusSand_App_UI_UiKit__StopBreathing_228972c(uVar8);
                          }
                        }
                        else {
                    /* catch() { ... } // from try @ 02388eac with catch @ 02388ec8 */
                    /* try { // try from 02388ecc to 02488ed3 has its CatchHandler @ 02388edc */
                          uVar8 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                    /* try { // try from 02388ed4 to 02488edf has its CatchHandler @ 02388b58 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02388ecc with catch @ 02388edc
                        */
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)puVar2);
                          }
                          Dino_BusSand_App_UI_UiKit__Breathe_2289058(_UNK_00e20174,0x3f400000,uVar8)
                          ;
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02388f54:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

