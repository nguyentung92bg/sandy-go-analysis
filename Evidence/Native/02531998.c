/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<HookLoaded>b__22_0
void Dino_BusSand_Sdk_DinoAdProvider___c___HookLoaded_b__22_0 (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, System_String_o* id, MaxSdkBase_AdInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<HookLoaded>b__22_0
   void Dino_BusSand_Sdk_DinoAdProvider___c___HookLoaded_b__22_0
   (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, System_String_o* id, MaxSdkBase_AdInfo_o* info,
   const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider___c___HookLoaded_b__22_0_2431998
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000004f9cc28 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeff0);
    FUN_02132f7c(PTR_DAT_04cbf050);
    bRam0000000004f9cc28 = 1;
  }
  puVar1 = PTR_DAT_04cbeff0;
  if (param_3 != 0) {
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbf050);
    Dino_BusSand_Sdk_DinoAdProvider_Loaded___ctor_2431644(uVar2,param_3);
    lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
    thunk_FUN_02142dc8();
    puVar4 = (undefined8 *)(lVar3 + 0x30);
    *puVar4 = uVar2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                   ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

