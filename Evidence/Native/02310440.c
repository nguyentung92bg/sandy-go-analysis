/* IL2CPP: Dino.BusSand.App.Meta.Feedback$$OpenMail
void Dino_BusSand_App_Meta_Feedback__OpenMail (System_String_o* body, int32_t stars, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Feedback$$OpenMail
   void Dino_BusSand_App_Meta_Feedback__OpenMail (System_String_o* body, int32_t stars, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_Feedback__OpenMail_2210440(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iStack_44;
  
  puVar2 = PTR_DAT_04caa210;
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
  puVar1 = PTR_DAT_04caa038;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Application__get_productName_43527ec(0);
  uVar5 = System_String__Concat_46c82e0(uVar5,*(undefined8 *)puVar3,0);
  lVar6 = FUN_02133068(*(undefined8 *)puVar1,0xb);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_04cb2310;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20));
      uVar7 = UnityEngine_Application__get_productName_43527ec(0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uVar7;
        thunk_FUN_02134474((undefined8 *)(lVar6 + 0x28),uVar7);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_04cab270;
          thunk_FUN_02134474((undefined8 *)(lVar6 + 0x30));
          uVar7 = UnityEngine_Application__get_version_435257c(0);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = uVar7;
            thunk_FUN_02134474((undefined8 *)(lVar6 + 0x38),uVar7);
            puVar1 = PTR_DAT_04cb2308;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_04cb2308;
              thunk_FUN_02134474((undefined8 *)(lVar6 + 0x40));
              uVar7 = UnityEngine_SystemInfo__get_deviceModel_43cc320(0);
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x48) = uVar7;
                thunk_FUN_02134474((undefined8 *)(lVar6 + 0x48),uVar7);
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)puVar1;
                  thunk_FUN_02134474((undefined8 *)(lVar6 + 0x50));
                  uVar7 = UnityEngine_SystemInfo__get_operatingSystem_43cc058(0);
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar6 + 0x58) = uVar7;
                    thunk_FUN_02134474();
                    puVar3 = PTR_DAT_04caa6a8;
                    if (param_2 < 1) {
                      uVar7 = *(undefined8 *)PTR_DAT_04ca9c30;
                    }
                    else {
                      uVar7 = System_Int32__ToString_482d750(&iStack_44,0);
                      uVar7 = System_String__Concat_46d2b84
                                        (*(undefined8 *)puVar1,uVar7,*(undefined8 *)puVar3,0);
                    }
                    if (8 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x60) = uVar7;
                      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x60));
                      puVar1 = PTR_DAT_04cabaf8;
                      if (9 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)PTR_DAT_04cb2300;
                        thunk_FUN_02134474();
                        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                          thunk_FUN_0218fdac();
                        }
                        uVar7 = Dino_BusSand_App_Meta_Profile__get_PlayerId_2274008(0);
                        puVar4 = PTR_DAT_04cb22f8;
                        puVar3 = PTR_DAT_04cb22f0;
                        puVar1 = PTR_DAT_04cb22e0;
                        if (10 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x70) = uVar7;
                          thunk_FUN_02134474();
                          uVar7 = System_String__Concat_46d31f0(lVar6,0);
                          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(*(long *)puVar1);
                          }
                          uVar5 = System_Uri__EscapeDataString_3f97a54(uVar5,0);
                          uVar7 = System_String__Concat_46c82e0(param_1,uVar7,0);
                          uVar7 = System_Uri__EscapeDataString_3f97a54(uVar7,0);
                          uVar5 = System_String__Concat_46d30e8
                                            (*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar4,uVar7
                                             ,0);
                          lVar6 = *(long *)puVar2;
                          if (*(int *)(lVar6 + 0xe4) == 0) {
                            thunk_FUN_0218fdac(lVar6);
                          }
                          UnityEngine_Application__OpenURL_4352a5c(uVar5,0);
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

