/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$.cctor
void Dino_BusSand_App_Meta_LiveOps___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.LiveOps$$.cctor
   void Dino_BusSand_App_Meta_LiveOps___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_LiveOps___cctor_2242724(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_DAT_04cb38d0;
  puVar2 = PTR_DAT_04cb38c8;
  puVar1 = PTR_DAT_04cac668;
  if ((bRam0000000004f9bf10 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb38d0);
    FUN_02132f7c(PTR_DAT_04cb38c8);
    FUN_02132f7c(PTR_DAT_04cac668);
    bRam0000000004f9bf10 = 1;
  }
  uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
  *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = 1;
  return;
}

