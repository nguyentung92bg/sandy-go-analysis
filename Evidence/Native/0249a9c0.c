/* IL2CPP: Dino.BusSand.View.GameView$$BuildStatic
void Dino_BusSand_View_GameView__BuildStatic (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$BuildStatic
   void Dino_BusSand_View_GameView__BuildStatic (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__BuildStatic_239a9c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR_DAT_04cbc2b0;
  puVar1 = PTR_DAT_04caa070;
  if ((bRam0000000004f9c905 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac840);
    FUN_02132f7c(PTR_DAT_04cad378);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb27f8);
    FUN_02132f7c(PTR_DAT_04cbc2b8);
    FUN_02132f7c(PTR_DAT_04cbc2b0);
    FUN_02132f7c(PTR_DAT_04cb6c68);
    FUN_02132f7c(PTR_DAT_04cbc2c0);
    bRam0000000004f9c905 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
  if (lVar3 != 0) {
    lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
    uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    puVar2 = PTR_DAT_04cac840;
    if (lVar4 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar4,uVar5,0,0);
      lVar3 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar3,*(undefined8 *)puVar2);
      plVar6 = (long *)(param_1 + 0x38);
      *plVar6 = lVar3;
      thunk_FUN_02134474(plVar6,lVar3);
      if (*plVar6 != 0) {
        UnityEngine_Camera__set_orthographic_4356b20(*plVar6,0,0);
        if (*plVar6 != 0) {
          UnityEngine_Camera__set_fieldOfView_4355f50(0x41f00000,*plVar6,0);
          puVar2 = PTR_DAT_04cbc2b8;
          if (*plVar6 != 0) {
            UnityEngine_Camera__set_clearFlags_4358bd4(*plVar6,2,0);
            lVar3 = *plVar6;
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (lVar3 != 0) {
              lVar4 = *(long *)(*(long *)puVar2 + 0xb8);
              UnityEngine_Camera__set_backgroundColor_4358a4c
                        (*(undefined4 *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x68),
                         *(undefined4 *)(lVar4 + 0x6c),*(undefined4 *)(lVar4 + 0x70),lVar3,0);
              if (*plVar6 != 0) {
                UnityEngine_Camera__set_nearClipPlane_4355c40(0x3f800000,*plVar6,0);
                if (*plVar6 != 0) {
                  UnityEngine_Camera__set_farClipPlane_4355dc8(0x430c0000,*plVar6,0);
                  puVar2 = PTR_DAT_04cb27f8;
                  if (*plVar6 != 0) {
                    UnityEngine_Component__set_tag_43bd3bc
                              (*plVar6,*(undefined8 *)PTR_DAT_04cb6c68,0);
                    lVar3 = *plVar6;
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    Dino_BusSand_RenderQuality__SetupGameCamera_238ace8(lVar3);
                    if (*plVar6 != 0) {
                      UnityEngine_Camera__set_nearClipPlane_4355c40(0x42480000,*plVar6,0);
                      puVar2 = PTR_DAT_04cbc2c0;
                      if (*plVar6 != 0) {
                        UnityEngine_Camera__set_farClipPlane_4355dc8(0x43a00000,*plVar6,0);
                        lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                        UnityEngine_GameObject___ctor_43c20cc(lVar3,*(undefined8 *)puVar2,0);
                        if (lVar3 != 0) {
                          lVar4 = UnityEngine_GameObject__get_transform_43c1048(lVar3,0);
                          uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
                          puVar1 = PTR_DAT_04cad378;
                          if (lVar4 != 0) {
                            UnityEngine_Transform__SetParent_43d1e34(lVar4,uVar5,0,0);
                            uVar5 = UnityEngine_GameObject__AddComponent_object__275a54c
                                              (lVar3,*(undefined8 *)puVar1);
                            puVar7 = (undefined8 *)(param_1 + 0xd0);
                            *puVar7 = uVar5;
                            thunk_FUN_02134474(puVar7,uVar5);
                            Dino_BusSand_RenderQuality__SetupLight_238b1a0(*puVar7);
                            Dino_BusSand_View_GameView__ApplyEnvironment_239aca0(param_1);
                            UnityEngine_Component__get_transform_43bcd18(param_1,0);
                            uVar5 = Dino_BusSand_RenderQuality__CreateVolume_238b32c();
                            puVar7 = (undefined8 *)(param_1 + 0xd8);
                            *puVar7 = uVar5;
                            if (iRam00000000051c1b10 != 0) {
                              FUN_02220bf0(1L << ((ulong)puVar7 >> 0xc & 0x3f),
                                           ((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

