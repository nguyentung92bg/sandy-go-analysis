/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$ResetFeatureFlags
void Dino_BusSand_App_Meta_FeatureGate__ResetFeatureFlags (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$ResetFeatureFlags
   void Dino_BusSand_App_Meta_FeatureGate__ResetFeatureFlags (const MethodInfo* method); */

void Dino_BusSand_App_Meta_FeatureGate__ResetFeatureFlags_220bc50(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bcf1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2148);
    FUN_02132f7c(PTR_DAT_04cb2158);
    bRam0000000004f9bcf1 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar4 != 0) {
    System_Collections_Generic_HashSet_Int32Enum___Clear_37dec74
              (lVar4,*(undefined8 *)PTR_DAT_04cb2158);
    puVar3 = PTR_DAT_04cb2148;
    lVar4 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar7 = 0;
        uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar5 = *(long *)puVar2;
          uVar1 = *(undefined4 *)(lVar4 + 0x20 + uVar7 * 4);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar2;
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
          if (lVar5 == 0) goto LAB_0230bd5c;
          System_Collections_Generic_HashSet_Int32Enum___Add_37df810
                    (lVar5,uVar1,*(undefined8 *)puVar3);
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      return;
    }
  }
LAB_0230bd5c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

