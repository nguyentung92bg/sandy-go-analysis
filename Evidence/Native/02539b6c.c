/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$SetUserProperty
void Dino_BusSand_Sdk_SandBusTrackingProvider__SetUserProperty (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this, System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$SetUserProperty
   void Dino_BusSand_Sdk_SandBusTrackingProvider__SetUserProperty
   (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this, System_String_o* propertyName, Il2CppObject*
   value, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider__SetUserProperty_2439b6c
               (long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cc67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa218);
    FUN_02132f7c(PTR_DAT_04cbf428);
    FUN_02132f7c(PTR_DAT_04cb4ae0);
    bRam0000000004f9cc67 = 1;
  }
  uStack_28 = 0;
  uVar2 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__op_Equality_46d1108(param_2,*(undefined8 *)PTR_DAT_04cb4ae0,0);
    puVar1 = PTR_DAT_04ca9ac8;
    if (((uVar2 & 1) != 0) && (param_3 != (long *)0x0)) {
      if ((*param_3 == *(long *)(PTR_DAT_04ca9ac8 + 0x90)) &&
         (uVar2 = System_Int64__TryParse_482f580(param_3,&uStack_28,0), (uVar2 & 1) != 0)) {
        uStack_38 = uStack_28;
        param_3 = (long *)FUN_02133100(*(undefined8 *)(puVar1 + 0x68),&uStack_38);
      }
    }
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 == (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_04caa218 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Databuckets_Analytics_DatabucketsTracker__SetCommonProperty_2137564(param_2,param_3,0);
    }
    else {
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04cbf428) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_02539cc4;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04cbf428,3);
LAB_02539cc4:
      (*(code *)*puVar3)(plVar6,param_2,param_3,puVar3[1]);
    }
  }
  return;
}

