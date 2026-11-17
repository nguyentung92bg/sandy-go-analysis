/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$On
bool Dino_BusSand_App_Meta_FeatureGate__On (int32_t f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.FeatureGate$$On
   bool Dino_BusSand_App_Meta_FeatureGate__On (int32_t f, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_FeatureGate__On_220b9e8(int param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04cac458;
  if ((bRam0000000004f9bcf3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cb2140);
    bRam0000000004f9bcf3 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    uVar4 = System_Collections_Generic_HashSet_Int32Enum___Contains_37decd4
                      (lVar3,param_1,*(undefined8 *)PTR_DAT_04cb2140);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      bVar2 = true;
      if ((5 < param_1) && (param_1 != 0xf)) {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar3 = *(long *)puVar1;
        }
        bVar2 = **(char **)(lVar3 + 0xb8) != '\0';
      }
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

