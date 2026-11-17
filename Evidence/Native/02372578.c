/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Add
void Dino_BusSand_App_Meta_Profile__Add (int32_t id, int64_t n, System_String_o* reason, const MethodInfo* method);
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
/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Add
   void Dino_BusSand_App_Meta_Profile__Add (int32_t id, int64_t n, System_String_o* reason, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__Add_2272578(int param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000004f9c0fa & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa200);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0fa = 1;
  }
  puVar2 = PTR_DAT_04cabaf8;
  if (param_2 != 0) {
    if (param_1 == 0x3ea) {
      if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      iVar5 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0();
      Dino_BusSand_App_Meta_Profile__AddHearts_227275c(param_2 & 0xffffffff);
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar11 = *(long *)puVar2;
                    /* try { // try from 02372630 to 02472653 has its CatchHandler @ 02372740 */
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar11 = *(long *)puVar2;
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02372758 to 0247276f has its CatchHandler @ 023727c4 */
        FUN_02133224();
      }
      iVar1 = *(int *)(lVar11 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 0237266c to 0247268b has its CatchHandler @ 0237273c */
      lVar11 = (long)(iVar1 - iVar5);
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
      if (lVar11 != 0) {
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar2;
        }
        if ((*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) != 0) &&
           (uVar7 = System_String__op_Equality_46d1108(param_3,*(undefined8 *)PTR_DAT_04cad048,0),
           puVar3 = PTR_DAT_04caa200, (uVar7 & 1) == 0)) {
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          puVar4 = PTR_DAT_04cac498;
          lVar6 = -lVar11;
          if (-1 < lVar11) {
            lVar6 = lVar11;
          }
          if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar8 = Dino_BusSand_App_Meta_GameTracking__ResourceName_2216080(0x3ea);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar9 = Dino_BusSand_App_Meta_Profile__Count_225b150(0x3ea,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_GameTracking__Placement_221676c
                    (0x3ea,param_3,0 < lVar11,&uStack_68,&uStack_70);
          if (lVar11 < 1) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar10 = Dino_BusSand_App_Meta_GameTracking__ResourceType_2216218(0x3ea);
            lStack_88 = 0;
            uStack_80 = 0;
            System_Nullable_long____ctor_2bcc314(&lStack_88,uVar9,*(undefined8 *)PTR_DAT_04cb2538);
            Dino_BusSand_App_Meta_GameTracking__Spend_2215bc8
                      (uVar10,uVar8,lVar6,lStack_88,uStack_80,uStack_68,uStack_70);
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            lVar11 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar4);
            }
            uVar10 = Dino_BusSand_App_Meta_GameTracking__ResourceType_2216218(0x3ea);
            if ((lVar11 == 0) ||
               (lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                   (lVar11,*(undefined8 *)PTR_DAT_04cb24f8,uVar10,0), lVar11 == 0))
            {
LAB_02316768:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                               (lVar11,*(undefined8 *)PTR_DAT_04cb2500,uVar8,0);
            puVar2 = PTR_DAT_04ca9ac8;
            lStack_88 = lVar6;
            uVar8 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x68),&lStack_88);
            if ((lVar11 == 0) ||
               ((lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                    (lVar11,*(undefined8 *)PTR_DAT_04cb24e0,uVar8,0), lVar11 == 0 ||
                (lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                    (lVar11,*(undefined8 *)PTR_DAT_04caa870,uStack_68,0),
                lVar11 == 0)))) goto LAB_02316768;
            lVar11 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                               (lVar11,*(undefined8 *)PTR_DAT_04cad0e0,uStack_70,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uStack_78 = System_Math__Max_4830fd4(0,uVar9,0);
            uVar8 = FUN_02133100(*(undefined8 *)(puVar2 + 0x68),&uStack_78);
            if (lVar11 == 0) goto LAB_02316768;
            uVar8 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                              (lVar11,*(undefined8 *)PTR_DAT_04cb24e8,uVar8,0);
            Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc
                      (*(undefined8 *)PTR_DAT_04cb2540,uVar8,0);
          }
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_GameTracking__PushProperties_2211e88(0);
        }
      }
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 02372698 to 0247269f has its CatchHandler @ 02372738 */
    lVar11 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_1);
                    /* try { // try from 023726ac to 024726bf has its CatchHandler @ 02372740 */
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa200);
    }
                    /* try { // try from 023726c0 to 02472757 has its CatchHandler @ 02372470 */
    uVar8 = System_Math__Max_4830fd4(0,lVar11 + param_2,0);
    Dino_BusSand_App_Meta_Profile__SetItem_2272308(param_1,uVar8);
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30();
    lVar6 = Dino_BusSand_App_Meta_Profile__Count_225b150(param_1);
    if (*(int *)(*(long *)PTR_DAT_04cac5c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac5c0);
    }
    Dino_BusSand_App_Analytics__Item_2174b5c(param_1,lVar6 - lVar11,param_3,0);
    lVar11 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    if (lVar11 != 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02372698 with catch @ 02372738
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0237266c with catch @ 0237273c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02372630 with catch @ 02372740
                       catch(type#1 @ 049bb748) { ... } // from try @ 023726ac with catch @ 02372740
                        */
                    /* WARNING: Could not recover jumptable at 0x02372744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),param_1,*(undefined8 *)(lVar11 + 0x28));
      return;
    }
  }
  return;
}

