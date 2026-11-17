/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$Reload
void Dino_BusSand_Core_LevelCatalog__Reload (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$Reload
   void Dino_BusSand_Core_LevelCatalog__Reload (const MethodInfo* method); */

void Dino_BusSand_Core_LevelCatalog__Reload_240f9dc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 0250f9dc to 0260f9e7 has its CatchHandler @ 0250fc9c */
  puVar3 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9cb36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd40);
                    /* try { // try from 0250fa08 to 0260fa0f has its CatchHandler @ 0250fd38 */
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9cb36 = 1;
  }
  puVar2 = PTR_DAT_04ca9c30;
  lVar4 = *(long *)puVar3;
                    /* try { // try from 0250fa30 to 0260fa3b has its CatchHandler @ 0250fd24 */
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  **(undefined8 **)(lVar4 + 0xb8) = 0;
  thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),0);
                    /* try { // try from 0250fa64 to 0260fa6b has its CatchHandler @ 0250fcf0 */
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = *(undefined8 *)puVar2;
  thunk_FUN_02134474();
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = *(undefined8 *)puVar2;
                    /* try { // try from 0250fa7c to 0260fa7f has its CatchHandler @ 0250fcec */
  thunk_FUN_02134474();
                    /* try { // try from 0250fa80 to 0260fa8f has its CatchHandler @ 0250fcf4 */
  lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
  lVar4 = *(long *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0xc) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  if (lVar4 != 0) {
                    /* try { // try from 0250fa9c to 0260fa9f has its CatchHandler @ 0250fd04 */
    iVar1 = *(int *)(lVar4 + 0x20);
    if (0 < iVar1) {
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0,*(undefined8 *)PTR_DAT_04cacd40);
      }
      System_Array__Clear_4851dc8(lVar5,0,*(undefined4 *)(lVar5 + 0x18),0);
      *(undefined4 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0xffffffff00000000;
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar4 + 0x18),0,iVar1,0);
    }
    *(int *)(lVar4 + 0x2c) = *(int *)(lVar4 + 0x2c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

