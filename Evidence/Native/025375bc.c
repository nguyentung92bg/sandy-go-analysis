/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$InternalParse
void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__InternalParse (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig_o* __this, Il2CppObject* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusEconomyRemoteConfig$$InternalParse
   void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__InternalParse
   (Dino_BusSand_Sdk_SandBusEconomyRemoteConfig_o* __this, Il2CppObject* data, const MethodInfo*
   method); */

void Dino_BusSand_Sdk_SandBusEconomyRemoteConfig__InternalParse_24375bc(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000004f9cc55 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf2b8);
    FUN_02132f7c(PTR_DAT_04cbf2c0);
    FUN_02132f7c(PTR_DAT_04cbf2c8);
    FUN_02132f7c(PTR_DAT_04cbf2d0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cc55 = 1;
  }
  puVar2 = PTR_DAT_04cbf2d0;
  if (param_2 == (long *)0x0) {
LAB_02537674:
    if (*(int *)(*(long *)PTR_DAT_04cbf2c8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    param_2 = (long *)Newtonsoft_Json_JsonConvert__SerializeObject_3bef834(param_2,0);
LAB_02537698:
    *(undefined1 *)(param_1 + 8) = 1;
    if (param_2 == (long *)0x0) {
      plVar7 = *(long **)PTR_DAT_04ca9c30;
      goto LAB_025376d0;
    }
  }
  else {
    lVar8 = *param_2;
    if (lVar8 != *(long *)(PTR_DAT_04ca9ac8 + 0x90)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cbf2c0 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_04cbf2c0))
      goto LAB_02537674;
      lVar9 = *(long *)PTR_DAT_04cbf2b8;
      lVar8 = *(long *)(lVar9 + 0x38);
      if (lVar8 == 0) {
        FUN_0216b4cc(lVar9);
        lVar8 = *(long *)(lVar9 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0216b470();
      }
      param_2 = (long *)Newtonsoft_Json_Linq_JToken__ToString_3c4bc8c
                                  (param_2,0,**(undefined8 **)(lVar8 + 0xb8),0);
      goto LAB_02537698;
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  plVar7 = (long *)System_String__Trim_46d6ee0(param_2,0);
LAB_025376d0:
  puVar4 = PTR_DAT_04cc5aa8;
  puVar3 = PTR_DAT_04cc43b0;
  lVar8 = *(long *)puVar2;
  if ((bRam0000000004f9e1ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc43b0);
    FUN_02132f7c(PTR_DAT_04cc5aa8);
    bRam0000000004f9e1ac = 1;
  }
  uVar5 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
  uVar10 = *(undefined8 *)puVar3;
  uVar11 = *(undefined8 *)puVar4;
  if (plVar7 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
  }
  uVar5 = System_String__Concat_46d30e8(uVar11,uVar5,uVar10,uVar6,0);
  Dino_Common_RemoteConfigDebugLog__Log_24468ec(uVar5,0);
  param_1[2] = (long)plVar7;
  thunk_FUN_02134474(param_1 + 2,plVar7);
  lVar8 = *(long *)(lVar8 + 0x20);
  *(undefined1 *)(param_1 + 3) = 1;
  Dino_Common_RemoteConfigDataBase_object___SavePlayerPref_2e3ff18
            (param_1,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0xe0));
  lVar8 = param_1[7];
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f40288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
    return;
  }
  return;
}

