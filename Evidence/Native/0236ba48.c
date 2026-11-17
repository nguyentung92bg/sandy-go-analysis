/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$.cctor
void Dino_BusSand_App_Meta_MonetizationSettings___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.MonetizationSettings$$.cctor
   void Dino_BusSand_App_Meta_MonetizationSettings___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_MonetizationSettings___cctor_226ba48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9c0b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacfd8);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cabb28);
    FUN_02132f7c(PTR_DAT_04cb1db8);
    FUN_02132f7c(PTR_DAT_04cb1dc0);
    FUN_02132f7c(PTR_DAT_04caad50);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9c0b8 = 1;
  }
  lVar5 = FUN_02133068(*(undefined8 *)puVar1,2);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_04caad50;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20));
      puVar4 = PTR_DAT_04cb1dc0;
      puVar3 = PTR_DAT_04cb1db8;
      puVar2 = PTR_DAT_04cacfd8;
      puVar1 = PTR_DAT_04ca9c30;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04cabb28;
        thunk_FUN_02134474();
        **(long **)(*(long *)puVar2 + 0xb8) = lVar5;
        thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar5);
        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20) = *(undefined8 *)puVar1;
        thunk_FUN_02134474();
        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = *(undefined8 *)puVar4;
        thunk_FUN_02134474();
        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30) = *(undefined8 *)puVar3;
        thunk_FUN_02134474();
        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38) = *(undefined8 *)puVar1;
        thunk_FUN_02134474();
        *(undefined2 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48) = 0x101;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

