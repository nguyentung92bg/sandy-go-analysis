/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Rebuild
void Dino_BusSand_App_UI_CommerceUi__Rebuild (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$Rebuild
   void Dino_BusSand_App_UI_CommerceUi__Rebuild (UnityEngine_Transform_o* t, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_CommerceUi__Rebuild_22ac20c(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam0000000004f9c2ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb40);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c2ac = 1;
  }
  if ((param_1 != (long *)0x0) && (*param_1 != *(long *)PTR_DAT_04cabdb0)) {
    param_1 = (long *)0x0;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cadb40 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cadb40;
  if ((bRam0000000004fac6cf & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb40,0);
    FUN_02132f7c(PTR_DAT_04d09d28);
    FUN_02132f7c(PTR_DAT_04d09d30);
    bRam0000000004fac6cf = 1;
  }
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar2;
  }
  if ((**(long **)(lVar6 + 0xb8) != 0) &&
     (lVar6 = FUN_028157b8(**(long **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_04d09d28), lVar6 != 0))
  {
    UnityEngine_UI_LayoutRebuilder__Initialize_4686fd0(lVar6,param_1);
    UnityEngine_UI_LayoutRebuilder__Rebuild_46874a4(lVar6,1);
    lVar7 = **(long **)(*(long *)puVar2 + 0xb8);
    if (lVar7 != 0) {
      lVar8 = *(long *)PTR_DAT_04d09d30;
      lVar9 = *(long *)(lVar7 + 0x28);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),lVar6,*(undefined8 *)(lVar9 + 0x28));
      }
      plVar5 = (long *)(lVar7 + 0x40);
      if (*plVar5 != 0) {
        iVar3 = UnityEngine_Pool_ObjectPool_object___get_CountInactive_2c30898
                          (lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x90));
        if (*(int *)(lVar7 + 0x38) <= iVar3) {
          lVar8 = *(long *)(lVar7 + 0x30);
          *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + -1;
          if (lVar8 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x02815974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x18))
                    (*(undefined8 *)(lVar8 + 0x40),lVar6,*(undefined8 *)(lVar8 + 0x28));
          return;
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x10);
          lVar8 = *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x98);
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar6;
            }
            else {
              uVar1 = *(uint *)(lVar7 + 0x18);
              System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                        (lVar7,uVar1 + 1,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                        0x70) + 0x20) + 0xc0) + 0x78));
              lVar8 = *(long *)(lVar7 + 0x10);
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_0213322c();
              }
              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar6;
            }
            goto thunk_FUN_02134474;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *plVar5 = lVar6;
thunk_FUN_02134474:
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)plVar5 >> 0xc & 0x3f),
                     ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

