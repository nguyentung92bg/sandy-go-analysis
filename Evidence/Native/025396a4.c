/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$Send
void Dino_BusSand_Sdk_SandBusTrackingProvider__Send (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this, System_String_o* eventName, System_Collections_Generic_IEnumerable_DinoTrackingParameter__o* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02539b0c) */
/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$Send
   void Dino_BusSand_Sdk_SandBusTrackingProvider__Send (Dino_BusSand_Sdk_SandBusTrackingProvider_o*
   __this, System_String_o* eventName,
   System_Collections_Generic_IEnumerable_DinoTrackingParameter__o* parameters, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__Send_24396a4
               (long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long **pplStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  
  puVar2 = PTR_DAT_04ca9b50;
  puVar1 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9cc68 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa218);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbf418);
    FUN_02132f7c(PTR_DAT_04cbf420);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbf428);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cbf430);
    FUN_02132f7c(PTR_DAT_04cbf438);
    bRam0000000004f9cc68 = 1;
  }
  plStack_48 = (long *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar4,*(undefined8 *)puVar2);
  if (param_3 != (long *)0x0) {
    lVar9 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04cbf418) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_02539800;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(param_3,*(long *)PTR_DAT_04cbf418,0);
LAB_02539800:
    plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
    puVar3 = PTR_DAT_04cbf420;
    puVar2 = PTR_DAT_04ca9c08;
    puVar1 = PTR_DAT_04ca9b58;
    pplStack_88 = &plStack_48;
    uStack_90 = 0;
    do {
      plStack_48 = plVar6;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02539884;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar2,0);
LAB_02539884:
      uVar10 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      plVar6 = plStack_48;
      if ((uVar10 & 1) == 0) {
        if (plStack_48 == (long *)0x0) break;
        lVar9 = *plStack_48;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_02539994;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0253997c;
      }
      if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar9 = *plStack_48;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_025398e8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0216b7a4(plStack_48,*(long *)puVar3,0);
LAB_025398e8:
      (*(code *)*puVar5)(&uStack_c0,plVar6,puVar5[1]);
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uVar10 = System_String__IsNullOrEmpty_46d2084(uStack_c0,0);
      uVar8 = uStack_80;
      plVar6 = plStack_48;
      if ((uVar10 & 1) == 0) {
        uVar7 = Dino_Common_DinoTrackingParameter__get_Value_2447784(&uStack_80,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar4,uVar8,uVar7,*(undefined8 *)puVar1);
        plVar6 = plStack_48;
      }
    } while( true );
  }
  goto LAB_025399c0;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0253997c:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_025399b0;
    }
  }
LAB_02539994:
  puVar5 = (undefined8 *)FUN_0216b7a4(plStack_48,*(long *)PTR_DAT_04ca9b30,0);
LAB_025399b0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_025399c0:
  if (*(int *)(*(long *)PTR_DAT_04cb2240 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_App_Meta_TrackingPlan__PatchSdkEvent_2275dbc(param_2,lVar4,0);
  puVar1 = PTR_DAT_04ca9af8;
  if (lVar9 != 0) {
    uVar8 = System_String__Concat_46d30e8
                      (*(undefined8 *)PTR_DAT_04cbf430,param_2,*(undefined8 *)PTR_DAT_04cbf438,lVar9
                       ,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_Debug__LogWarning_4357a30(uVar8,0);
  }
  puVar1 = PTR_DAT_04cbf428;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    if (*(int *)(*(long *)PTR_DAT_04caa218 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Databuckets_Analytics_DatabucketsTracker__Record_2136ec0(param_2,lVar4,0);
  }
  else {
    uVar8 = Dino_BusSand_Sdk_SandBusTrackingProvider__ToParams_2439cec(lVar4);
    lVar4 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_02539ad8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)puVar1,2);
LAB_02539ad8:
    (*(code *)*puVar5)(plVar6,param_2,uVar8,puVar5[1]);
  }
  return;
}

