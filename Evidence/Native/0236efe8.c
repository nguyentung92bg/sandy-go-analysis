/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$.cctor
void Dino_BusSand_App_Meta_PlayerIdentity___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$.cctor
   void Dino_BusSand_App_Meta_PlayerIdentity___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_PlayerIdentity___cctor_226efe8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_04cae570;
  puVar1 = PTR_DAT_04cae330;
  if ((bRam0000000004f9c0dc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    FUN_02132f7c(PTR_DAT_04cae330);
    bRam0000000004f9c0dc = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Random___ctor_4840a9c(uVar3,0);
  puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar4 = uVar3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

