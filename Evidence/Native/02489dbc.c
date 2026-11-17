/* IL2CPP: Dino.BusSand.Haptics$$.cctor
void Dino_BusSand_Haptics___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Haptics$$.cctor
   void Dino_BusSand_Haptics___cctor (const MethodInfo* method); */

void Dino_BusSand_Haptics___cctor_2389dbc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar3 = PTR_DAT_04cbbd30;
  puVar2 = PTR_DAT_04cbbd28;
  puVar1 = PTR_DAT_04cab238;
  if ((bRam0000000004f9c889 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbd30);
    FUN_02132f7c(PTR_DAT_04cbbd28);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c889 = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
  **(undefined1 **)(*(long *)puVar1 + 0xb8) = 1;
  uVar4 = thunk_FUN_0216e89c(uVar4);
  System_Collections_Generic_Dictionary_int__object____ctor_343658c(uVar4,*(undefined8 *)puVar3);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
  *puVar5 = uVar4;
  thunk_FUN_02134474(puVar5,uVar4);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = 0xffffffff;
  return;
}

