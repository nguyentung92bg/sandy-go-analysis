/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$FlushUi
void Dino_BusSand_App_Meta_JourneyTracking__FlushUi (int32_t endBy, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$FlushUi
   void Dino_BusSand_App_Meta_JourneyTracking__FlushUi (int32_t endBy, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__FlushUi_221dac8(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bdab & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9bdab = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x38) != '\0') {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_0231dc98;
      }
      uVar6 = Dino_BusSand_App_Meta_Journey_UiJourney__get_Empty_229a488(lVar7,0);
      lVar5 = 0;
      if ((uVar6 & 1) == 0) {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_0231dc98;
        lVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__Encode_229abcc(lVar5,param_1,0);
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_04cabaf8;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_0231dc98;
      Dino_BusSand_App_Meta_Journey_UiJourney__Reset_229ac48(lVar7,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x98);
        uVar6 = System_String__IsNullOrEmpty_46d2084(*puVar8,0);
        if ((uVar6 & 1) == 0) {
          *puVar8 = *(undefined8 *)PTR_DAT_04ca9c30;
          thunk_FUN_02134474(puVar8);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
        }
      }
      if (lVar5 != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar2 = PTR_DAT_04cabaf8;
        if ((bRam0000000004f9bdac & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          FUN_02132f7c(PTR_DAT_04cb2240);
          FUN_02132f7c(PTR_DAT_04cb2880);
          FUN_02132f7c(PTR_DAT_04cb2888);
          FUN_02132f7c(PTR_DAT_04cb2890);
          bRam0000000004f9bdac = 1;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b894 == '\0') {
          FUN_02132f7c(PTR_DAT_04cabaf8);
          cRam0000000004f9b894 = '\x01';
        }
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        puVar2 = PTR_DAT_04cb2240;
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar9 != 0) {
          iVar1 = *(int *)(lVar7 + 0xe4);
          *(int *)(lVar9 + 0x94) = *(int *)(lVar9 + 0x94) + 1;
          if (iVar1 == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          lVar7 = Dino_BusSand_App_Meta_TrackingPlan__P_2275068(0);
          uStack_24 = *(undefined4 *)(lVar9 + 0x94);
          uVar4 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_24);
          if ((lVar7 == 0) ||
             (lVar7 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                                (lVar7,*(undefined8 *)PTR_DAT_04cb2880,uVar4,0),
             puVar2 = PTR_DAT_04cb2888, lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar4 = Dino_BusSand_App_Meta_TrackingPlan_Params__Req_22920d4
                            (lVar7,*(undefined8 *)PTR_DAT_04cb2890,lVar5,0);
          Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(*(undefined8 *)puVar2,uVar4,0);
        }
        return;
      }
    }
    return;
  }
LAB_0231dc98:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

