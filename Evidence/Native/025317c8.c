/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<Hook>b__16_1
void Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_1 (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, System_String_o* id, MaxSdkBase_AdInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<Hook>b__16_1
   void Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_1 (Dino_BusSand_Sdk_DinoAdProvider___c_o*
   __this, System_String_o* id, MaxSdkBase_AdInfo_o* info, const MethodInfo* method); */

int Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_1_24317c8
              (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04cbeff0;
  if ((bRam0000000004f9cc23 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeff0);
    bRam0000000004f9cc23 = 1;
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  thunk_FUN_02142dc8();
  puVar4 = (undefined8 *)(lVar3 + 0x18);
  *puVar4 = param_2;
  thunk_FUN_02134474(puVar4,param_2);
  iVar2 = FUN_02220b60(1,*(long *)(*(long *)puVar1 + 0xb8) + 4);
  DataMemoryBarrier(2,3);
  return iVar2 + 1;
}

