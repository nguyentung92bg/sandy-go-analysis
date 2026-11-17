/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass79_0$$<CycleDoor>b__1
void Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0___CycleDoor_b__1 (Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass79_0$$<CycleDoor>b__1
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0___CycleDoor_b__1
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0___CycleDoor_b__1_23d58dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000004f9ca21 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbd738);
    bRam0000000004f9ca21 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
    System_Action_float____ctor_35f1448(lVar2,param_1,*(undefined8 *)PTR_DAT_04cbd738,0);
    *(long *)(param_1 + 0x30) = lVar2;
    thunk_FUN_02134474((long *)(param_1 + 0x30),lVar2);
  }
  lVar2 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e207cc,lVar2,0);
  if ((lVar2 != 0) && (lVar2 = Dino_BusSand_Tween__SetDelay_238bb40(0x3f000000,lVar2,0), lVar2 != 0)
     ) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x18),uVar1,0);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

