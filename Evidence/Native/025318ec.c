/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<Hook>b__16_4
void Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_4 (Dino_BusSand_Sdk_DinoAdProvider___c_o* __this, System_String_o* id, MaxSdkBase_AdInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.<>c$$<Hook>b__16_4
   void Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_4 (Dino_BusSand_Sdk_DinoAdProvider___c_o*
   __this, System_String_o* id, MaxSdkBase_AdInfo_o* info, const MethodInfo* method); */

int Dino_BusSand_Sdk_DinoAdProvider___c___Hook_b__16_4_24318ec(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_04cbeff0;
  if ((bRam0000000004f9cc26 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbeff0);
    bRam0000000004f9cc26 = 1;
  }
  iVar2 = FUN_02220b60(1,*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  DataMemoryBarrier(2,3);
  return iVar2 + 1;
}

