/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Record
void Dino_BusSand_App_Meta_TrackingPlan__Record (System_String_o* name, System_Collections_Generic_Dictionary_string__object__o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Record
   void Dino_BusSand_App_Meta_TrackingPlan__Record (System_String_o* name,
   System_Collections_Generic_Dictionary_string__object__o* p, const MethodInfo* method); */

void Dino_BusSand_App_Meta_TrackingPlan__Record_22750bc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_50;
  long lStack_48;
  
  puVar3 = PTR_DAT_04cb2240;
  if ((bRam0000000004f9c11b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
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
  lStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04cb48a0;
  puVar2 = PTR_DAT_04caccc8;
  lVar5 = Dino_BusSand_App_Meta_TrackingPlan__Validate_227557c(param_1,param_2,&lStack_48);
  if (lVar5 != 0) {
    uVar6 = System_String__Concat_46d30e8
                      (*(undefined8 *)puVar4,param_1,*(undefined8 *)puVar2,lVar5,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar6);
    return;
  }
  if (lStack_48 != 0) {
    lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
    if (lVar5 == 0) goto LAB_023754bc;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_023754c0:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20));
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_023754c0;
    *(undefined8 *)(lVar5 + 0x28) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x28),param_1);
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_023754c0;
    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)puVar2;
    thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30));
    if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_023754c0;
    *(long *)(lVar5 + 0x38) = lStack_48;
    thunk_FUN_02134474((long *)(lVar5 + 0x38));
    if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_023754c0;
    *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_04cb48a8;
    thunk_FUN_02134474();
    uVar6 = System_String__Concat_46d31f0(lVar5,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar3);
    }
    Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar6);
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  uStack_68 = 0;
  uStack_60 = 0;
  System_Collections_Generic_KeyValuePair_object__object____ctor_3910e8c
            (&uStack_68,param_1,param_2,*(undefined8 *)PTR_DAT_04cb4880);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_04cb4888;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar8 + 0x20);
        *puVar7 = uStack_68;
        *(undefined8 *)(lVar8 + 0x28) = uStack_60;
        thunk_FUN_02134474(puVar7,0);
      }
      else {
        System_Collections_Generic_List_KeyValuePair_object__object____AddWithResize_397033c
                  (lVar5,uStack_68,uStack_60,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *(long *)puVar3;
      lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        if (300 < *(int *)(lVar8 + 0x18)) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar8 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
            if (lVar8 == 0) goto LAB_023754bc;
          }
          System_Collections_Generic_List_KeyValuePair_object__object____RemoveAt_3971b48
                    (lVar8,0,*(undefined8 *)PTR_DAT_04cb4890);
          lVar5 = *(long *)puVar3;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x20) != '\0') {
          uVar6 = Dino_BusSand_App_MiniJson__Serialize_21556ec(param_2,0);
          uVar6 = System_String__Concat_46d30e8
                            (*(undefined8 *)puVar4,param_1,*(undefined8 *)PTR_DAT_04cab270,uVar6,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
          }
          UnityEngine_Debug__Log_4360fc8(uVar6,0);
          lVar5 = *(long *)puVar3;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        lVar8 = **(long **)(lVar5 + 0xb8);
        if (lVar8 == 0) {
          return;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = **(long **)(*(long *)puVar3 + 0xb8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
        (**(code **)(lVar8 + 0x18))
                  (*(undefined8 *)(lVar8 + 0x40),param_1,param_2,*(undefined8 *)(lVar8 + 0x28));
        return;
      }
    }
  }
LAB_023754bc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

