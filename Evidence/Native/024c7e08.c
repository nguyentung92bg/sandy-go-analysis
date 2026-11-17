/* IL2CPP: Dino.BusSand.View.MechanicLayer$$CycleDoor
void Dino_BusSand_View_MechanicLayer__CycleDoor (Dino_BusSand_View_MechanicLayer_o* __this, int32_t liftId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$CycleDoor
   void Dino_BusSand_View_MechanicLayer__CycleDoor (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t liftId, const MethodInfo* method); */

ulong Dino_BusSand_View_MechanicLayer__CycleDoor_23c7e08(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar2 = PTR_DAT_04cbd2b8;
  if ((bRam0000000004f9c9d9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd2c0);
    FUN_02132f7c(PTR_DAT_04cbd2c8);
    FUN_02132f7c(PTR_DAT_04cbd2d0);
    FUN_02132f7c(PTR_DAT_04cbd2b8);
    bRam0000000004f9c9d9 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass79_0___ctor_23d5844(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x20) = param_1;
    thunk_FUN_02134474((long *)(lVar3 + 0x20),param_1);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (*(long *)(param_1 + 0xa0),param_2,(long *)(lVar3 + 0x10),
                         *(undefined8 *)PTR_DAT_04cbd2c0);
      if ((uVar4 & 1) == 0) {
        return uVar4;
      }
      lVar6 = *(long *)(lVar3 + 0x10);
      if (lVar6 != 0) {
        uVar7 = *(undefined4 *)(lVar6 + 0x18);
        iVar1 = *(int *)(lVar6 + 0x1c) + 1;
        uVar5 = *(undefined8 *)PTR_DAT_04cac208;
        *(int *)(lVar6 + 0x1c) = iVar1;
        *(int *)(lVar3 + 0x18) = iVar1;
        *(undefined4 *)(lVar3 + 0x28) = uVar7;
        uVar5 = thunk_FUN_0216e89c(uVar5);
        System_Action_float____ctor_35f1448(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cbd2c8,0);
        lVar6 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e20aec,uVar5,0);
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar5,lVar3,*(undefined8 *)PTR_DAT_04cbd2d0,0);
        if ((lVar6 != 0) && (uVar4 = Dino_BusSand_Tween__OnDone_238bb74(lVar6,uVar5,0), uVar4 != 0))
        {
          *(long *)(uVar4 + 0x18) = param_1;
          thunk_FUN_02134474((long *)(uVar4 + 0x18),param_1,0);
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

