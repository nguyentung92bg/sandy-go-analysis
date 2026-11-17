/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$TryConvert
bool Dino_BusSand_App_Meta_MonetizationSettings__TryConvert (System_Reflection_FieldInfo_o* f, Il2CppObject* raw, Il2CppObject** value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$TryConvert
   bool Dino_BusSand_App_Meta_MonetizationSettings__TryConvert (System_Reflection_FieldInfo_o* f,
   Il2CppObject* raw, Il2CppObject** value, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_MonetizationSettings__TryConvert_226b24c
          (long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  double *pdVar11;
  long *plVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  undefined4 uStack_74;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  puVar4 = PTR_DAT_04cb4700;
  if ((bRam0000000004f9c0b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4700);
    FUN_02132f7c(PTR_DAT_04cb4708);
    FUN_02132f7c(PTR_DAT_04caec70);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c0b4 = 1;
  }
  puVar5 = PTR_DAT_04caa200;
  *param_3 = 0;
  thunk_FUN_02134474(param_3,0);
  lVar7 = System_Reflection_CustomAttributeExtensions__GetCustomAttribute_object__2712740
                    (param_1,*(undefined8 *)puVar4);
  if (lVar7 == 0) {
    iVar2 = -0x80000000;
  }
  else {
    fVar17 = *(float *)(lVar7 + 0x14);
    if (cRam0000000004f9ba93 == '\0') {
      FUN_02132f7c(PTR_DAT_04caa200);
      cRam0000000004f9ba93 = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = -0x80000000;
    if ((float)(int)fVar17 != INFINITY) {
      iVar2 = (int)fVar17;
    }
  }
  if (param_1 == (long *)0x0) {
LAB_0236b6c4:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar8 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  puVar4 = PTR_DAT_04ca9ac8;
  lVar7 = *(long *)(PTR_DAT_04ca9ac8 + 0x28);
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
  }
  uVar9 = System_Type__GetTypeFromHandle_483f0b4(lVar7 + 0x20,0);
  uVar10 = System_Type__op_Equality_4847b28(uVar8,uVar9,0);
  if ((uVar10 & 1) == 0) {
    uVar8 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    lVar7 = *(long *)(puVar4 + 0x48);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(puVar4 + 0xe0));
    }
    uVar9 = System_Type__GetTypeFromHandle_483f0b4(lVar7 + 0x20,0);
    uVar10 = System_Type__op_Equality_4847b28(uVar8,uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar8 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
      uVar9 = *(undefined8 *)PTR_DAT_04cb4708;
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(puVar4 + 0xe0));
      }
      uVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
      uVar10 = System_Type__op_Equality_4847b28(uVar8,uVar9,0);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      lVar7 = Dino_BusSand_App_MiniJson__Arr_2156264(param_2,0);
      if (lVar7 == 0) {
        return 0;
      }
      if (*(int *)(lVar7 + 0x18) == 0) {
        return 0;
      }
      lVar14 = FUN_02133068(*(undefined8 *)PTR_DAT_04caec70);
      puVar6 = PTR_DAT_04cb15c0;
      dVar16 = _UNK_00e6a080;
      if (lVar14 == 0) goto LAB_0236b6c4;
      if (0 < *(int *)(lVar14 + 0x18)) {
        uVar10 = 0;
        do {
          plVar12 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                      (lVar7,uVar10 & 0xffffffff,*(undefined8 *)puVar6);
          if (plVar12 == (long *)0x0) {
            return 0;
          }
          if (*plVar12 != *(long *)(puVar4 + 0x80)) {
            return 0;
          }
          pdVar11 = (double *)thunk_FUN_0216e9e4();
          dVar18 = *pdVar11;
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (dVar18 < 0.0) {
            return 0;
          }
          if (dVar18 != (double)(long)dVar18) {
            return 0;
          }
          if (dVar16 < dVar18) {
            return 0;
          }
          uVar3 = *(uint *)(lVar14 + 0x18);
          if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c(0);
          }
          iVar2 = -0x80000000;
          if (dVar18 != INFINITY) {
            iVar2 = (int)dVar18;
          }
          *(int *)(lVar14 + 0x20 + uVar10 * 4) = iVar2;
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)uVar3);
      }
      *param_3 = lVar14;
      goto LAB_0236b698;
    }
    if ((param_2 == (long *)0x0) || (*param_2 != *(long *)(puVar4 + 0x80))) {
      return 0;
    }
    pdVar11 = (double *)thunk_FUN_0216e9e4(param_2);
    dVar16 = *pdVar11;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (dVar16 != (double)(long)dVar16) {
      return 0;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (_UNK_00e6a080 < ABS(dVar16)) {
      return 0;
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar1 = -0x80000000;
    if (dVar16 != INFINITY) {
      iVar1 = (int)dVar16;
    }
    uStack_74 = System_Math__Max_4830fc8(iVar2,iVar1,0);
    uVar8 = *(undefined8 *)(puVar4 + 0x48);
    puVar15 = &uStack_74;
  }
  else {
    if (param_2 == (long *)0x0) {
      return 0;
    }
    if (*param_2 == *(long *)(puVar4 + 0x28)) {
      puVar13 = (undefined1 *)thunk_FUN_0216e9e4(param_2);
      auStack_54[0] = *puVar13;
      uVar8 = *(undefined8 *)(puVar4 + 0x28);
      puVar15 = (undefined4 *)auStack_54;
    }
    else {
      if (*param_2 != *(long *)(puVar4 + 0x80)) {
        return 0;
      }
      pdVar11 = (double *)thunk_FUN_0216e9e4(param_2);
      dVar16 = *pdVar11;
      if ((dVar16 != 0.0) && (dVar16 != 1.0)) {
        return 0;
      }
      uVar8 = *(undefined8 *)(puVar4 + 0x28);
      puVar15 = (undefined4 *)auStack_58;
      auStack_58[0] = dVar16 == 1.0;
    }
  }
  lVar14 = FUN_02133100(uVar8,puVar15);
  *param_3 = lVar14;
LAB_0236b698:
  thunk_FUN_02134474(param_3,lVar14);
  return 1;
}

