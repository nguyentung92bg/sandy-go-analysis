/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$Boot
void Dino_BusSand_Sdk_DatabucketsBoot__Boot (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DatabucketsBoot$$Boot
   void Dino_BusSand_Sdk_DatabucketsBoot__Boot (const MethodInfo* method); */

void Dino_BusSand_Sdk_DatabucketsBoot__Boot_24302bc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int aiStack_3c [3];
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9cc14 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa218);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbef70);
    FUN_02132f7c(PTR_DAT_04cb23e0);
    FUN_02132f7c(PTR_DAT_04cbef78);
    FUN_02132f7c(PTR_DAT_04cbef80);
    FUN_02132f7c(PTR_DAT_04cb2418);
    bRam0000000004f9cc14 = 1;
  }
  uStack_28 = 0;
  uStack_30 = 0;
  Dino_BusSand_Sdk_SandBusTrackingProvider__RouteTrackingPlan_24305e8();
  if (cRam0000000004f9cc9f == '\0') {
    FUN_02132f7c(PTR_DAT_04cbef68);
    cRam0000000004f9cc9f = '\x01';
  }
  puVar2 = PTR_DAT_04cbef68;
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04cbef68 + 0xb8) + 8) = 1;
  lVar4 = Dino_BusSand_App_SdkConfig__get_Instance_215d6cc(0);
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    uVar5 = System_String__IsNullOrEmpty_46d2084(uVar7,0);
    if ((uVar5 & 1) == 0) {
      uVar5 = Dino_BusSand_Sdk_DatabucketsBoot__TryResolveDinoKey_2430758(&uStack_28);
      if ((uVar5 & 1) != 0) {
        if (cRam0000000004f9cca0 == '\0') {
          FUN_02132f7c(PTR_DAT_04cbef68);
          cRam0000000004f9cca0 = '\x01';
        }
        **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
        thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
        uVar3 = uStack_28;
        if (*(int *)(*(long *)PTR_DAT_04caa218 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Databuckets_Analytics_DatabucketsTracker__Init_21358a8(uVar7,uVar3,0);
        aiStack_3c[0] = UnityEngine_PlayerPrefs__GetInt_43b5358(*(undefined8 *)PTR_DAT_04cb23e0,1,0)
        ;
        if (aiStack_3c[0] < 2) {
          aiStack_3c[0] = 1;
        }
        uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),aiStack_3c);
        Databuckets_Analytics_DatabucketsTracker__SetCommonProperty_2137564
                  (*(undefined8 *)PTR_DAT_04cb2418,uVar7,0);
        if (cRam0000000004f9cca1 == '\0') {
          FUN_02132f7c(PTR_DAT_04cbef68);
          cRam0000000004f9cca1 = '\x01';
        }
        iVar1 = *(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4);
        *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 9) = 1;
        if (iVar1 == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Debug__Log_4360fc8(*(undefined8 *)PTR_DAT_04cbef70,0);
        return;
      }
      puVar6 = (undefined8 *)PTR_DAT_04cbef78;
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar6 = (undefined8 *)PTR_DAT_04cbef78;
      }
    }
    else {
      puVar6 = (undefined8 *)PTR_DAT_04cbef80;
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar6 = (undefined8 *)PTR_DAT_04cbef80;
      }
    }
    UnityEngine_Debug__LogWarning_4357a30(*puVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

