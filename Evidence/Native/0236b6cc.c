/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Bound
bool Dino_BusSand_App_Meta_MonetizationSettings__Bound (System_Reflection_FieldInfo_o* f, Il2CppObject** v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$Bound
   bool Dino_BusSand_App_Meta_MonetizationSettings__Bound (System_Reflection_FieldInfo_o* f,
   Il2CppObject** v, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_MonetizationSettings__Bound_226b6cc(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  bool bVar9;
  ulong uVar10;
  int iStack_24;
  
  puVar4 = PTR_DAT_04cb4710;
  if ((bRam0000000004f9c0b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4710);
    FUN_02132f7c(PTR_DAT_04caec70);
    bRam0000000004f9c0b5 = 1;
  }
  lVar5 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__2712740
                    (param_1,*(undefined8 *)puVar4);
  puVar4 = PTR_DAT_04ca9ac8;
  if (lVar5 != 0) {
    plVar6 = (long *)*param_2;
    if ((plVar6 != (long *)0x0) && (*plVar6 == *(long *)(PTR_DAT_04ca9ac8 + 0x48))) {
      piVar8 = (int *)thunk_FUN_0216e9e4();
      iVar3 = *piVar8;
      iVar1 = iVar3;
      if (*(int *)(lVar5 + 0x14) <= iVar3) {
        iVar1 = *(int *)(lVar5 + 0x14);
      }
      iVar2 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) <= iVar3) {
        iVar2 = iVar1;
      }
      iStack_24 = iVar2;
      lVar5 = FUN_02133100(*(undefined8 *)(puVar4 + 0x48),&iStack_24);
      *param_2 = lVar5;
      thunk_FUN_02134474(param_2,lVar5);
      return iVar2 != iVar3;
    }
    lVar7 = thunk_FUN_0216e7a0(plVar6,*(undefined8 *)PTR_DAT_04caec70);
    if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
      bVar9 = false;
      uVar10 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      piVar8 = (int *)(lVar7 + 0x20);
      do {
        iVar3 = *piVar8;
        iVar1 = iVar3;
        if (*(int *)(lVar5 + 0x14) <= iVar3) {
          iVar1 = *(int *)(lVar5 + 0x14);
        }
        iVar2 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) <= iVar3) {
          iVar2 = iVar1;
        }
        *piVar8 = iVar2;
        uVar10 = uVar10 - 1;
        bVar9 = (bool)(bVar9 | iVar2 != iVar3);
        piVar8 = piVar8 + 1;
      } while (uVar10 != 0);
      return bVar9;
    }
  }
  return false;
}

