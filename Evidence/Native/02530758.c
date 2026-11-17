/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$TryResolveDinoKey
bool Dino_BusSand_Sdk_DatabucketsBoot__TryResolveDinoKey (System_String_o** key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$TryResolveDinoKey
   bool Dino_BusSand_Sdk_DatabucketsBoot__TryResolveDinoKey (System_String_o** key, const
   MethodInfo* method); */

byte Dino_BusSand_Sdk_DatabucketsBoot__TryResolveDinoKey_2430758(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  long *plVar12;
  undefined8 uVar13;
  
  if ((bRam0000000004f9cc15 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbefb0);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbefb8);
    FUN_02132f7c(PTR_DAT_04cbefc0);
    FUN_02132f7c(PTR_DAT_04cbefc8);
    FUN_02132f7c(PTR_DAT_04cbefd0);
    bRam0000000004f9cc15 = 1;
  }
  puVar5 = PTR_DAT_04cbefc8;
  puVar4 = PTR_DAT_04cbefb8;
  puVar3 = PTR_DAT_04cbefb0;
  *param_1 = 0;
  thunk_FUN_02134474(param_1,0);
  puVar2 = PTR_DAT_04ca9ac8;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = FUN_0213340c(*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar3);
  uVar8 = System_Type__op_Inequality_48487c8(lVar7,0,0);
  uVar13 = 0;
  if ((uVar8 & 1) != 0) {
    uVar13 = UnityEngine_Resources__Load_43b69d0(*(undefined8 *)PTR_DAT_04cbefd0,lVar7,0);
  }
  puVar3 = PTR_DAT_04ca9ae8;
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = System_Type__GetMethod_4849f04(lVar7,*(undefined8 *)PTR_DAT_04cbefc0,0x34,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  if (((uVar8 & 1) != 0) ||
     (uVar8 = System_Reflection_MethodInfo__op_Equality_476e570(lVar9,0,0), (uVar8 & 1) != 0)) {
    bVar6 = 0;
LAB_025308bc:
    return bVar6 & 1;
  }
  lVar7 = FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
  if ((lVar9 != 0) &&
     (plVar10 = (long *)System_Reflection_MethodBase__Invoke_4772dd4(lVar9,uVar13,lVar7,0),
     lVar7 != 0)) {
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar12 = *(long **)(lVar7 + 0x20);
    if (plVar12 == (long *)0x0) {
      plVar12 = (long *)0x0;
      *param_1 = 0;
    }
    else {
      plVar1 = plVar12;
      if (*plVar12 != *(long *)(puVar2 + 0x90)) {
        plVar1 = (long *)0x0;
      }
      *param_1 = (long)plVar1;
      if (*plVar12 != *(long *)(puVar2 + 0x90)) {
        plVar12 = (long *)0x0;
      }
    }
    thunk_FUN_02134474(param_1,plVar12);
    if (plVar10 != (long *)0x0) {
      if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)(puVar2 + 0x28) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar10);
      }
      pcVar11 = (char *)thunk_FUN_0216e9e4();
      bVar6 = 0;
      if (*pcVar11 != '\0') {
        bVar6 = System_String__IsNullOrEmpty_46d2084(*param_1,0);
        bVar6 = bVar6 ^ 1;
      }
      goto LAB_025308bc;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

