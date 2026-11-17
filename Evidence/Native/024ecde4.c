/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Clear
void Dino_BusSand_View_SuctionBeams__Clear (Dino_BusSand_View_SuctionBeams_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.SuctionBeams$$Clear
   void Dino_BusSand_View_SuctionBeams__Clear (Dino_BusSand_View_SuctionBeams_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_SuctionBeams__Clear_23ecde4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000004f9caa6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbdc90);
                    /* try { // try from 024ece0c to 025ecfc7 has its CatchHandler @ 024ece0c
                       catch() { ... } // from try @ 024ece0c with catch @ 024ece0c
                       catch() { ... } // from try @ 024ed130 with catch @ 024ece0c
                       catch() { ... } // from try @ 024ed17c with catch @ 024ece0c
                       catch() { ... } // from try @ 024ed194 with catch @ 024ece0c
                       catch() { ... } // from try @ 024ed204 with catch @ 024ece0c
                       catch() { ... } // from try @ 024ed228 with catch @ 024ece0c */
    bRam0000000004f9caa6 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x20);
    if (0 < iVar1) {
      lVar3 = *(long *)(lVar2 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0,*(undefined8 *)PTR_DAT_04cbdc90);
      }
      System_Array__Clear_4851dc8(lVar3,0,*(undefined4 *)(lVar3 + 0x18),0);
      *(undefined4 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0xffffffff00000000;
      System_Array__Clear_4851dc8(*(undefined8 *)(lVar2 + 0x18),0,iVar1,0);
    }
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

