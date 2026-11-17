/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapClick
void Dino_BusSand_App_Meta_GameTracking__IapClick (int32_t storeItemId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GameTracking$$IapClick
   void Dino_BusSand_App_Meta_GameTracking__IapClick (int32_t storeItemId, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_GameTracking__IapClick_221875c(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_50;
  long alStack_48 [2];
  
  puVar3 = PTR_DAT_04cac498;
  if ((bRam0000000004f9bd6a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cad308);
    bRam0000000004f9bd6a = 1;
  }
  puVar2 = PTR_DAT_04caba90;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb2240;
  uVar5 = Dino_BusSand_App_Meta_GameTracking__PackName_22174bc(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar2 = PTR_DAT_04cad308;
  Dino_BusSand_App_Meta_JourneyTracking__UiMark_22149d0(4,0,0,uVar5);
  uVar5 = Dino_BusSand_App_Meta_GameTracking__IapParams_2218464(param_1);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
  puVar3 = PTR_DAT_04cb2240;
  uVar6 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9c11b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8,uVar5,0);
    FUN_02132f7c(PTR_DAT_04cb4880);
    FUN_02132f7c(PTR_DAT_04cb4888);
    FUN_02132f7c(PTR_DAT_04cb4890);
    FUN_02132f7c(PTR_DAT_04cb4898);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04caccc8);
    FUN_02132f7c(PTR_DAT_04cab270);
    FUN_02132f7c(PTR_DAT_04cb48a0);
    FUN_02132f7c(PTR_DAT_04cb48a8);
    bRam0000000004f9c11b = 1;
  }
  alStack_48[0] = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cb48a0;
  puVar2 = PTR_DAT_04caccc8;
  lVar7 = Dino_BusSand_App_Meta_TrackingPlan__Validate_227557c(uVar6,uVar5,alStack_48);
  if (lVar7 != 0) {
    uVar5 = System_String__Concat_46d30e8(*(undefined8 *)puVar4,uVar6,*(undefined8 *)puVar2,lVar7,0)
    ;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar5);
    return;
  }
  if (alStack_48[0] != 0) {
    lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
    if (lVar7 == 0) goto LAB_023754bc;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_023754c0:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x20));
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_023754c0;
    *(undefined8 *)(lVar7 + 0x28) = uVar6;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x28),uVar6);
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_023754c0;
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar2;
    thunk_FUN_02134474((undefined8 *)(lVar7 + 0x30));
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_023754c0;
    *(long *)(lVar7 + 0x38) = alStack_48[0];
    thunk_FUN_02134474((long *)(lVar7 + 0x38));
    if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_023754c0;
    *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)PTR_DAT_04cb48a8;
    thunk_FUN_02134474();
    uVar8 = System_String__Concat_46d31f0(lVar7,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar8);
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  uStack_68 = 0;
  uStack_60 = 0;
  System_Collections_Generic_KeyValuePair_object__object____ctor_3910e8c
            (&uStack_68,uVar6,uVar5,*(undefined8 *)PTR_DAT_04cb4880);
  if (lVar7 != 0) {
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)PTR_DAT_04cb4888;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        puVar9 = (undefined8 *)(lVar10 + 0x20);
        *puVar9 = uStack_68;
        *(undefined8 *)(lVar10 + 0x28) = uStack_60;
        thunk_FUN_02134474(puVar9,0);
      }
      else {
        System_Collections_Generic_List_KeyValuePair_object__object____AddWithResize_397033c
                  (lVar7,uStack_68,uStack_60,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *(long *)puVar3;
      lVar10 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar10 != 0) {
        if (300 < *(int *)(lVar10 + 0x18)) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar10 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            if (lVar10 == 0) goto LAB_023754bc;
          }
          System_Collections_Generic_List_KeyValuePair_object__object____RemoveAt_3971b48
                    (lVar10,0,*(undefined8 *)PTR_DAT_04cb4890);
          lVar7 = *(long *)puVar3;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar3;
        }
        if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x20) != '\0') {
          uVar8 = Dino_BusSand_App_MiniJson__Serialize_21556ec(uVar5,0);
          uVar8 = System_String__Concat_46d30e8
                            (*(undefined8 *)puVar4,uVar6,*(undefined8 *)PTR_DAT_04cab270,uVar8,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
          }
          UnityEngine_Debug__Log_4360fc8(uVar8,0);
          lVar7 = *(long *)puVar3;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar3;
        }
        lVar10 = **(long **)(lVar7 + 0xb8);
        if (lVar10 == 0) {
          return;
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar10 = **(long **)(*(long *)puVar3 + 0xb8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
        (**(code **)(lVar10 + 0x18))
                  (*(undefined8 *)(lVar10 + 0x40),uVar6,uVar5,*(undefined8 *)(lVar10 + 0x28));
        return;
      }
    }
  }
LAB_023754bc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

