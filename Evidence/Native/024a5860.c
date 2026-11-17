/* IL2CPP: Dino.BusSand.View.GameView$$OnBlocked
void Dino_BusSand_View_GameView__OnBlocked (Dino_BusSand_View_GameView_o* __this, int32_t id, int32_t blocker, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnBlocked
   void Dino_BusSand_View_GameView__OnBlocked (Dino_BusSand_View_GameView_o* __this, int32_t id,
   int32_t blocker, const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnBlocked_23a5860(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  double dStack_68;
  double dStack_60;
  long lStack_58;
  
  puVar1 = PTR_DAT_04cbc590;
  if ((bRam0000000004f9c930 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbc598);
    FUN_02132f7c(PTR_DAT_04cbc590);
    bRam0000000004f9c930 = 1;
  }
  dStack_60 = 0.0;
  lStack_58 = 0;
  dStack_68 = 0.0;
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_GameView___c__DisplayClass171_0___ctor_23abe18(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x28) = param_1;
    thunk_FUN_02134474((long *)(lVar2 + 0x28),param_1);
    if (*(long *)(param_1 + 0xe0) != 0) {
      uVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                        (*(long *)(param_1 + 0xe0),param_2,lVar2 + 0x10,
                         *(undefined8 *)PTR_DAT_04cbc4b8);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar4 != 0)) {
        uVar3 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c(lVar4,param_2,&lStack_58,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if (((*(long *)(param_1 + 0x20) != 0) &&
            (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar4 != 0)) &&
           (dVar7 = (double)Dino_BusSand_Core_TruckGrid__MaxForwardAdvance_242d6ac
                                      (lVar4,lStack_58,0), lStack_58 != 0)) {
          uVar8 = *(undefined4 *)(lStack_58 + 0x28);
          if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar8,&dStack_60,&dStack_68,0);
          *(undefined4 *)(lVar2 + 0x1c) = 0;
          *(float *)(lVar2 + 0x18) = (float)dStack_60;
          *(float *)(lVar2 + 0x20) = (float)dStack_68;
          if (((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x20) != 0)) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar4 != 0)) {
            fVar11 = *(float *)(*(long *)(param_1 + 0x30) + 0xfc);
            uVar5 = Dino_BusSand_Core_TruckGrid__BlockersOf_241cd5c(lVar4,lStack_58,0,0);
            *(undefined8 *)(lVar2 + 0x30) = uVar5;
            thunk_FUN_02134474();
            uVar8 = *(undefined4 *)(lVar2 + 0x18);
            uVar9 = *(undefined4 *)(lVar2 + 0x1c);
            lVar4 = *(long *)(lVar2 + 0x10);
            uVar10 = *(undefined4 *)(lVar2 + 0x20);
            uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar5,lVar2,*(undefined8 *)PTR_DAT_04cbc598,0);
            if (lVar4 != 0) {
              fVar6 = (float)dVar7 + _UNK_00e20174;
              if ((float)dVar7 + _UNK_00e20174 <= _UNK_00e201f4) {
                fVar6 = _UNK_00e201f4;
              }
              Dino_BusSand_View_VehicleView__PlayBump_23fd8cc
                        (uVar8,uVar9,uVar10,fVar6 * fVar11,lVar4,uVar5,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

