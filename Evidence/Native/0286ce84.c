/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$ParseEnum<__Il2CppFullySharedGenericStructType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Dino_BusSand_App_Meta_GiftPackConfig__ParseEnum___Il2CppFullySharedGenericStructType_ (Il2CppObject* v, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o fallback, const MethodInfo_276CE84* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Possible PIC construction at 0x0286cf68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0286cf6c) */
/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$ParseEnum<__Il2CppFullySharedGenericStructType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
   Dino_BusSand_App_Meta_GiftPackConfig__ParseEnum___Il2CppFullySharedGenericStructType_
   (Il2CppObject* v, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o fallback, const
   MethodInfo_276CE84* method); */

void Dino_BusSand_App_Meta_GiftPackConfig__ParseEnum___Il2CppFullySharedGenericStructType__276ce84
               (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  double *pdVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  lVar10 = *(long *)(param_4 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(param_4);
    lVar10 = *(long *)(param_4 + 0x38);
  }
  uVar8 = (ulong)*(uint *)(*(long *)(lVar10 + 8) + 0xfc);
  puVar7 = auStack_70 + -(uVar8 + 0xf & 0x1fffffff0);
  func_0x049b52e0(puVar7,0,uVar8);
  puVar3 = PTR_DAT_04ca9ac8;
  if (param_1 != (long *)0x0) {
    if (*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      pdVar5 = (double *)thunk_FUN_0216e9e4(param_1);
      dVar11 = *pdVar5;
      uVar9 = **(undefined8 **)(param_4 + 0x38);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
      lVar10 = *(long *)(puVar3 + 0x98);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar10);
      }
      iVar1 = -0x80000000;
      if (dVar11 != INFINITY) {
        iVar1 = (int)dVar11;
      }
      plVar6 = (long *)System_Enum__ToObject_4861b5c(uVar9,iVar1,0);
      lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0216b470(lVar10);
      }
      if (plVar6 == (long *)0x0) {
        if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
      else if (*(long *)(*plVar6 + 0x40) == *(long *)(lVar10 + 0x40)) {
        puVar7 = (undefined1 *)thunk_FUN_0216e9e4(plVar6);
        if (*(long *)(lVar2 + 0x28) == lStack_68) goto SUB_049b5410;
      }
      else if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar6);
      }
      goto LAB_0286d0d4;
    }
    if (*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0x98) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)(param_4 + 0x38);
      }
      uVar4 = (*(code *)**(undefined8 **)(lVar10 + 0x10))(param_1,1,puVar7);
      if ((uVar4 & 1) != 0) {
SUB_049b5410:
        (*(code *)PTR_memcpy_04d16750)(param_3,puVar7,uVar8);
        return;
      }
    }
  }
  func_0x049b5450(param_3,param_2,uVar8);
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return;
  }
LAB_0286d0d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

