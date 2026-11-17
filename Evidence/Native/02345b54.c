/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ActivePrivilege
void Dino_BusSand_App_Meta_PassportFeature__ActivePrivilege (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02316468) */
/* WARNING: Removing unreachable block (ram,0x02316480) */
/* WARNING: Removing unreachable block (ram,0x02316484) */
/* WARNING: Removing unreachable block (ram,0x023164b8) */
/* WARNING: Removing unreachable block (ram,0x023164c0) */
/* WARNING: Removing unreachable block (ram,0x023164c8) */
/* WARNING: Removing unreachable block (ram,0x023164dc) */
/* WARNING: Removing unreachable block (ram,0x023164e8) */
/* WARNING: Removing unreachable block (ram,0x023164f0) */
/* WARNING: Removing unreachable block (ram,0x023164fc) */
/* WARNING: Removing unreachable block (ram,0x0237268c) */
/* WARNING: Removing unreachable block (ram,0x02372690) */
/* WARNING: Removing unreachable block (ram,0x02372694) */
/* WARNING: Removing unreachable block (ram,0x023726b4) */
/* WARNING: Removing unreachable block (ram,0x023726bc) */
/* WARNING: Removing unreachable block (ram,0x023726fc) */
/* WARNING: Removing unreachable block (ram,0x02372704) */
/* WARNING: Removing unreachable block (ram,0x02372728) */
/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$ActivePrivilege
   void Dino_BusSand_App_Meta_PassportFeature__ActivePrivilege
   (Dino_BusSand_App_Meta_PassportFeature_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_Meta_PassportFeature__ActivePrivilege_2245b54(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9bf4f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04cad6e8);
    FUN_02132f7c(PTR_DAT_04caa1c8);
    FUN_02132f7c(PTR_DAT_04cb0558);
    FUN_02132f7c(PTR_DAT_04cb01b0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac018);
    FUN_02132f7c(PTR_DAT_04cb39f0);
    FUN_02132f7c(PTR_DAT_04cb39f8);
    FUN_02132f7c(PTR_DAT_04cb25f0);
    bRam0000000004f9bf4f = 1;
  }
  iVar5 = Dino_BusSand_App_Meta_PassportFeature__get_PrivilegeId_2244c08(param_1);
  if (iVar5 < 1) {
    return;
  }
  lVar9 = Dino_BusSand_App_Meta_LiveFeature_object___get_Data_2ae6258
                    (param_1,*(undefined8 *)PTR_DAT_04cb01b0);
  if (lVar9 != 0) {
    plVar14 = (long *)(lVar9 + 0x80);
    lVar9 = *plVar14;
    if (lVar9 == 0) {
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa1c8);
      System_Collections_Generic_List_int____ctor_3a2b7dc(lVar9,*(undefined8 *)PTR_DAT_04cad6e8);
      *plVar14 = lVar9;
      thunk_FUN_02134474(plVar14,lVar9);
      lVar9 = *plVar14;
      if (lVar9 == 0) goto LAB_02345df4;
    }
    uVar10 = System_Collections_Generic_List_int___Contains_3a2c3ec
                       (lVar9,iVar5,*(undefined8 *)PTR_DAT_04cad860);
    if ((uVar10 & 1) != 0) {
      return;
    }
    lVar9 = *plVar14;
    if (lVar9 != 0) {
      lVar12 = *(long *)(lVar9 + 0x10);
      lVar13 = *(long *)PTR_DAT_04caa160;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          *(int *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = iVar5;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_3a2c06c
                    (lVar9,iVar5,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
          ;
        }
        Dino_BusSand_App_Meta_LiveFeature_object___Save_2ae62fc
                  (param_1,*(undefined8 *)PTR_DAT_04cb0558);
        if (*(int *)(*(long *)PTR_DAT_04cac018 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = Dino_BusSand_App_Tables__Row_215ed9c(*(undefined8 *)PTR_DAT_04cb39f0,iVar5,0);
        uVar11 = Dino_BusSand_App_MiniJson__Get_21565a8(uVar11,*(undefined8 *)PTR_DAT_04cb39f8,0);
        iVar5 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar11,0,0);
        puVar2 = PTR_DAT_04cabaf8;
        if (0 < iVar5) {
          if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b894 == '\0') {
            FUN_02132f7c(PTR_DAT_04cabaf8);
            cRam0000000004f9b894 = '\x01';
          }
          lVar9 = *(long *)puVar2;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar9 = *(long *)puVar2;
          }
          if (*(long *)(*(long *)(lVar9 + 0xb8) + 0x10) != 0) {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar11 = *(undefined8 *)PTR_DAT_04cb25f0;
            if ((bRam0000000004f9c0fa & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cac5c0,iVar5,uVar11,0);
              FUN_02132f7c(PTR_DAT_04cac498);
              FUN_02132f7c(PTR_DAT_04caa200);
              FUN_02132f7c(PTR_DAT_04cabaf8);
              bRam0000000004f9c0fa = 1;
            }
            puVar2 = PTR_DAT_04cabaf8;
            if (iVar5 == 0) {
              return;
            }
            if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            iVar6 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0();
            Dino_BusSand_App_Meta_Profile__AddHearts_227275c(iVar5);
            if (cRam0000000004f9b894 == '\0') {
              FUN_02132f7c(PTR_DAT_04cabaf8);
              cRam0000000004f9b894 = '\x01';
            }
            lVar9 = *(long *)puVar2;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar2;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            iVar5 = *(int *)(lVar9 + 0x28);
            if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar9 = (long)(iVar5 - iVar6);
            if ((bRam0000000004f9bd5a & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04cac498);
              FUN_02132f7c(PTR_DAT_04caa200);
              FUN_02132f7c(PTR_DAT_04cb2538);
              FUN_02132f7c(PTR_DAT_04cabaf8);
              FUN_02132f7c(PTR_DAT_04cb2240);
              FUN_02132f7c(PTR_DAT_04cad0e0);
              FUN_02132f7c(PTR_DAT_04cb24e0);
              FUN_02132f7c(PTR_DAT_04cb24e8);
              FUN_02132f7c(PTR_DAT_04cb24f8);
              FUN_02132f7c(PTR_DAT_04cad048);
              FUN_02132f7c(PTR_DAT_04cb2540);
              FUN_02132f7c(PTR_DAT_04cb2548);
              FUN_02132f7c(PTR_DAT_04caa870);
              FUN_02132f7c(PTR_DAT_04cb2500);
              bRam0000000004f9bd5a = 1;
            }
            puVar2 = PTR_DAT_04cabaf8;
            uStack_70 = 0;
            uStack_68 = 0;
            if (lVar9 != 0) {
              if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b894 == '\0') {
                FUN_02132f7c(PTR_DAT_04cabaf8);
                cRam0000000004f9b894 = '\x01';
              }
              lVar12 = *(long *)puVar2;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar12 = *(long *)puVar2;
              }
              if ((*(long *)(*(long *)(lVar12 + 0xb8) + 0x10) != 0) &&
                 (uVar10 = System_String__op_Equality_46d1108
                                     (uVar11,*(undefined8 *)PTR_DAT_04cad048,0),
                 puVar3 = PTR_DAT_04caa200, (uVar10 & 1) == 0)) {
                if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                puVar4 = PTR_DAT_04cac498;
                lVar12 = -lVar9;
                if (-1 < lVar9) {
                  lVar12 = lVar9;
                }
                if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar7 = Dino_BusSand_App_Meta_GameTracking__ResourceName_2216080(0x3ea);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(*(long *)puVar2);
                }
                uVar8 = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3ea,0);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_GameTracking__Placement_221676c
                          (0x3ea,uVar11,0 < lVar9,&uStack_68,&uStack_70);
                if (lVar9 < 1) {
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar11 = Dino_BusSand_App_Meta_GameTracking__ResourceType_2216218(0x3ea);
                  lStack_88 = 0;
                  uStack_80 = 0;
                  System_Nullable_long____ctor_2bcc314
                            (&lStack_88,uVar8,*(undefined8 *)PTR_DAT_04cb2538);
                  Dino_BusSand_App_Meta_GameTracking__Spend_2215bc8
                            (uVar11,uVar7,lVar12,lStack_88,uStack_80,uStack_68,uStack_70);
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  lVar9 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar4);
                  }
                  uVar11 = Dino_BusSand_App_Meta_GameTracking__ResourceType_2216218(0x3ea);
                  if ((lVar9 == 0) ||
                     (lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                        (lVar9,*(undefined8 *)PTR_DAT_04cb24f8,uVar11,0), lVar9 == 0
                     )) {
LAB_02316768:
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                    (lVar9,*(undefined8 *)PTR_DAT_04cb2500,uVar7,0);
                  puVar2 = PTR_DAT_04ca9ac8;
                  lStack_88 = lVar12;
                  uVar11 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_88);
                  if ((lVar9 == 0) ||
                     ((lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                         (lVar9,*(undefined8 *)PTR_DAT_04cb24e0,uVar11,0),
                      lVar9 == 0 ||
                      (lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                         (lVar9,*(undefined8 *)PTR_DAT_04caa870,uStack_68,0),
                      lVar9 == 0)))) goto LAB_02316768;
                  lVar9 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                    (lVar9,*(undefined8 *)PTR_DAT_04cad0e0,uStack_70,0);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_0218fdac(*(long *)puVar3);
                  }
                  uStack_78 = System_Math__Max_4830fd4(0,uVar8,0);
                  uVar11 = FUN_02133100(*(undefined8 *)(puVar2 + 0x68),&uStack_78);
                  if (lVar9 == 0) goto LAB_02316768;
                  uVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                     (lVar9,*(undefined8 *)PTR_DAT_04cb24e8,uVar11,0);
                  Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc
                            (*(undefined8 *)PTR_DAT_04cb2540,uVar11,0);
                }
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(0);
              }
            }
            return;
          }
        }
        return;
      }
    }
  }
LAB_02345df4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

