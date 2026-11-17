/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$FindField
System_Reflection_FieldInfo_o* Dino_BusSand_App_Meta_MonetizationSettings__FindField (System_Type_o* t, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$FindField
   System_Reflection_FieldInfo_o* Dino_BusSand_App_Meta_MonetizationSettings__FindField
   (System_Type_o* t, System_String_o* key, const MethodInfo* method); */

long * Dino_BusSand_App_Meta_MonetizationSettings__FindField_226b12c
                 (long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  
  if ((bRam0000000004f9c0b3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac498);
    bRam0000000004f9c0b3 = 1;
  }
  if ((param_1 != (long *)0x0) &&
     (lVar3 = (**(code **)(*param_1 + 0x6e8))(param_1,0x14,*(undefined8 *)(*param_1 + 0x6f0)),
     puVar2 = PTR_DAT_04cac498, lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar6 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_0236b244;
        uVar4 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        uVar5 = System_String__op_Equality_46d1108(uVar4,param_2,0);
        if ((uVar5 & 1) != 0) {
          return plVar6;
        }
        uVar4 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        uVar4 = Dino_BusSand_App_Meta_GameTracking__SnakeCase_2215894(uVar4,0);
        uVar5 = System_String__op_Equality_46d1108(uVar4,param_2,0);
        if ((uVar5 & 1) != 0) {
          return plVar6;
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    return (long *)0x0;
  }
LAB_0236b244:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

