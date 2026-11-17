/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Join
Dino_BusSand_App_Meta_TrackingPlan_Field_array* Dino_BusSand_App_Meta_TrackingPlan__Join (Dino_BusSand_App_Meta_TrackingPlan_Field_array_array* parts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Join
   Dino_BusSand_App_Meta_TrackingPlan_Field_array* Dino_BusSand_App_Meta_TrackingPlan__Join
   (Dino_BusSand_App_Meta_TrackingPlan_Field_array_array* parts, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_TrackingPlan__Join_2274e10(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  ulong uVar9;
  undefined8 unaff_x30;
  
  puVar3 = PTR_DAT_04cb4850;
  puVar2 = PTR_DAT_04cb4848;
  if ((bRam0000000004f9c116 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4858);
    FUN_02132f7c(PTR_DAT_04cb4860);
    FUN_02132f7c(PTR_DAT_04cb4850);
    FUN_02132f7c(PTR_DAT_04cb4848);
    bRam0000000004f9c116 = 1;
  }
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_TrackingPlan_Field____ctor_2ab0118(lVar4,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_04cb4858;
  if (param_1 != 0) {
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar9 = 0;
      uVar7 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        if (lVar4 == 0) goto LAB_02374efc;
        System_Collections_Generic_List_TrackingPlan_Field___AddRange_2ab0ca8
                  (lVar4,*(undefined8 *)(param_1 + 0x20 + uVar9 * 8),*(undefined8 *)puVar2);
        uVar7 = (ulong)*(uint *)(param_1 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    if (lVar4 != 0) {
      lVar6 = *(long *)PTR_DAT_04cb4860;
      iVar1 = *(int *)(lVar4 + 0x18);
      lVar8 = *(long *)(*(long *)(lVar6 + 0x20) + 0xc0);
      if (iVar1 == 0) {
        lVar4 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0216b470();
        }
        uVar5 = **(undefined8 **)(lVar4 + 0xb8);
      }
      else {
        lVar6 = *(long *)(lVar8 + 0x18);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0216b470();
        }
        uVar5 = FUN_02133068(lVar6,iVar1);
        System_Array__Copy_4852078
                  (*(undefined8 *)(lVar4 + 0x10),0,uVar5,0,*(undefined4 *)(lVar4 + 0x18),0,in_x6,
                   in_x7,unaff_x30,unaff_x21,unaff_x20,unaff_x19);
      }
      return uVar5;
    }
  }
LAB_02374efc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

