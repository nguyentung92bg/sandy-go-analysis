/* IL2CPP: Dino.BusSand.App.Meta.Feedback$$Send
void Dino_BusSand_App_Meta_Feedback__Send (System_String_o* text, int32_t stars, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Feedback$$Send
   void Dino_BusSand_App_Meta_Feedback__Send (System_String_o* text, int32_t stars, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_Feedback__Send_220ff60(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iStack_44;
  
  puVar1 = PTR_DAT_04ca9c30;
  if ((bRam0000000004f9bd39 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bd39 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (param_1 != 0) {
    lVar5 = param_1;
  }
  if ((lVar5 != 0) && (lVar5 = System_String__Trim_46d6ee0(lVar5,0), lVar5 != 0)) {
    if (*(int *)(lVar5 + 0x10) == 0) {
      return;
    }
    if (1000 < *(int *)(lVar5 + 0x10)) {
      lVar5 = System_String__Substring_46d4848(lVar5,0,1000,0);
    }
    lVar6 = Dino_BusSand_App_SdkConfig__get_Instance_215d6cc(0);
    if (lVar6 != 0) {
      uVar9 = *(undefined8 *)(lVar6 + 0x20);
      uVar7 = System_String__IsNullOrEmpty_46d2084(uVar9,0);
      puVar1 = PTR_DAT_04caba50;
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b88f == '\0') {
          FUN_02132f7c(PTR_DAT_04caba50);
          cRam0000000004f9b88f = '\x01';
        }
        lVar6 = *(long *)puVar1;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar1;
        }
        uVar10 = **(undefined8 **)(lVar6 + 0xb8);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b88f == '\0') {
            FUN_02132f7c(PTR_DAT_04caba50);
            cRam0000000004f9b88f = '\x01';
          }
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar6 = *(long *)puVar1;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          uVar10 = Dino_BusSand_App_Meta_Feedback__Json_221015c(lVar5,param_2);
          lVar5 = Dino_BusSand_App_Meta_Feedback__Post_22103b8(uVar9,uVar10);
          if (lVar6 != 0) {
            if (lVar5 == 0) {
              thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
              uVar10 = thunk_FUN_0216e89c();
              uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
              System_NullReferenceException___ctor_483267c(uVar10,uVar9,0);
            }
            else {
              uVar7 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
              if ((uVar7 & 1) != 0) {
                if ((bRam0000000004fa84ef & 1) == 0) {
                  FUN_02132f7c(PTR_DAT_04cf7890);
                  bRam0000000004fa84ef = 1;
                }
                if (lVar6 != 0) {
                  lVar8 = *(long *)(lVar6 + 0x10);
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar6,0);
                  }
                  if (pcRam0000000004fa8560 == (code *)0x0) {
                    pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
                  }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000004fa8560)(lVar8,lVar5);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              thunk_FUN_021985a8(PTR_DAT_04caa3a8);
              uVar10 = thunk_FUN_0216e89c();
              uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
              System_ArgumentException___ctor_47b660c(uVar10,uVar9,0);
            }
            uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
            FUN_021330e8(uVar10,uVar9);
          }
          goto LAB_02310158;
        }
      }
      puVar1 = PTR_DAT_04caa210;
      iStack_44 = param_2;
      if ((bRam0000000004f9bd3a & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa210);
        FUN_02132f7c(PTR_DAT_04cabaf8);
        FUN_02132f7c(PTR_DAT_04caa038);
        FUN_02132f7c(PTR_DAT_04cb22e0);
        FUN_02132f7c(PTR_DAT_04cb22e8);
        FUN_02132f7c(PTR_DAT_04cab270);
        FUN_02132f7c(PTR_DAT_04cb22f0);
        FUN_02132f7c(PTR_DAT_04cb22f8);
        FUN_02132f7c(PTR_DAT_04cb2300);
        FUN_02132f7c(PTR_DAT_04cb2308);
        FUN_02132f7c(PTR_DAT_04cb2310);
        FUN_02132f7c(PTR_DAT_04ca9c30);
        FUN_02132f7c(PTR_DAT_04caa6a8);
        bRam0000000004f9bd3a = 1;
      }
      puVar3 = PTR_DAT_04cb22e8;
      puVar2 = PTR_DAT_04caa038;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Application__get_productName_43527ec(0);
      uVar9 = System_String__Concat_46c82e0(uVar9,*(undefined8 *)puVar3,0);
      lVar6 = FUN_02133068(*(undefined8 *)puVar2,0xb);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_04cb2310;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20));
          uVar10 = UnityEngine_Application__get_productName_43527ec(0);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar6 + 0x28) = uVar10;
            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28),uVar10);
            if (2 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_04cab270;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30));
              uVar10 = UnityEngine_Application__get_version_435257c(0);
              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                *(undefined8 *)(lVar6 + 0x38) = uVar10;
                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x38),uVar10);
                puVar2 = PTR_DAT_04cb2308;
                if (4 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_04cb2308;
                  thunk_FUN_02134474((undefined8 *)(lVar6 + 0x40));
                  uVar10 = UnityEngine_SystemInfo__get_deviceModel_43cc320(0);
                  if (5 < *(uint *)(lVar6 + 0x18)) {
                    *(undefined8 *)(lVar6 + 0x48) = uVar10;
                    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x48),uVar10);
                    if (6 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)puVar2;
                      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x50));
                      uVar10 = UnityEngine_SystemInfo__get_operatingSystem_43cc058(0);
                      if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar6 + 0x58) = uVar10;
                        thunk_FUN_02134474();
                        puVar3 = PTR_DAT_04caa6a8;
                        if (param_2 < 1) {
                          uVar10 = *(undefined8 *)PTR_DAT_04ca9c30;
                        }
                        else {
                          uVar10 = System_Int32__ToString_482d750(&iStack_44,0);
                          uVar10 = System_String__Concat_46d2b84
                                             (*(undefined8 *)puVar2,uVar10,*(undefined8 *)puVar3,0);
                        }
                        if (8 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x60) = uVar10;
                          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x60));
                          puVar2 = PTR_DAT_04cabaf8;
                          if (9 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)PTR_DAT_04cb2300;
                            thunk_FUN_02134474();
                            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                              thunk_FUN_0218fdac();
                            }
                            uVar10 = Dino_BusSand_App_Meta_Profile__get_PlayerId_2274008(0);
                            puVar4 = PTR_DAT_04cb22f8;
                            puVar3 = PTR_DAT_04cb22f0;
                            puVar2 = PTR_DAT_04cb22e0;
                            if (10 < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0x70) = uVar10;
                              thunk_FUN_02134474();
                              uVar10 = System_String__Concat_46d31f0(lVar6,0);
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                thunk_FUN_0218fdac(*(long *)puVar2);
                              }
                              uVar9 = System_Uri__EscapeDataString_3f97a54(uVar9,0);
                              uVar10 = System_String__Concat_46c82e0(lVar5,uVar10,0);
                              uVar10 = System_Uri__EscapeDataString_3f97a54(uVar10,0);
                              uVar9 = System_String__Concat_46d30e8
                                                (*(undefined8 *)puVar3,uVar9,*(undefined8 *)puVar4,
                                                 uVar10,0);
                              lVar5 = *(long *)puVar1;
                              if (*(int *)(lVar5 + 0xe4) == 0) {
                                thunk_FUN_0218fdac(lVar5);
                              }
                              UnityEngine_Application__OpenURL_4352a5c(uVar9,0);
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
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_02310158:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

