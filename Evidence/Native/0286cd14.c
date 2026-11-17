/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$ParseEnum<Int32Enum>
int32_t Dino_BusSand_App_Meta_GiftPackConfig__ParseEnum_Int32Enum_ (Il2CppObject* v, int32_t fallback, const MethodInfo_276CD14* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackConfig$$ParseEnum<Int32Enum>
   int32_t Dino_BusSand_App_Meta_GiftPackConfig__ParseEnum_Int32Enum_ (Il2CppObject* v, int32_t
   fallback, const MethodInfo_276CD14* method); */

undefined4
Dino_BusSand_App_Meta_GiftPackConfig__ParseEnum_Int32Enum__276cd14
          (long *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  double *pdVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined4 uStack_34;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0216b4cc(param_3);
  }
  puVar2 = PTR_DAT_04ca9ac8;
  uStack_34 = 0;
  uVar8 = param_2;
  if (param_1 != (long *)0x0) {
    if (*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x80)) {
      pdVar4 = (double *)thunk_FUN_0216e9e4(param_1);
      dVar10 = *pdVar4;
      uVar9 = **(undefined8 **)(param_3 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
      lVar7 = *(long *)(puVar2 + 0x98);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
      }
      iVar1 = -0x80000000;
      if (dVar10 != INFINITY) {
        iVar1 = (int)dVar10;
      }
      plVar5 = (long *)System_Enum__ToObject_4861b5c(uVar9,iVar1,0);
      lVar7 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0216b470(lVar7);
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar5);
      }
      puVar6 = (undefined4 *)thunk_FUN_0216e9e4();
      uVar8 = *puVar6;
    }
    else if (*param_1 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
      if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0x98) + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = System_Enum__TryParse_Int32Enum__2729354
                        (param_1,1,&uStack_34,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
      uVar8 = uStack_34;
      if ((uVar3 & 1) == 0) {
        uVar8 = param_2;
      }
    }
  }
  return uVar8;
}

