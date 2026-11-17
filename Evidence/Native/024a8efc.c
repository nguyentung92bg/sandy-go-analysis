/* IL2CPP: Dino.BusSand.View.GameView$$OnGrainLanded
void Dino_BusSand_View_GameView__OnGrainLanded (Dino_BusSand_View_GameView_o* __this, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$OnGrainLanded
   void Dino_BusSand_View_GameView__OnGrainLanded (Dino_BusSand_View_GameView_o* __this, int32_t
   truckId, const MethodInfo* method); */

void Dino_BusSand_View_GameView__OnGrainLanded_23a8efc(long param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  float fStack_34;
  long lStack_28;
  
  if ((bRam0000000004f9c935 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cbb008);
    FUN_02132f7c(PTR_DAT_04cbb010);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9c935 = 1;
  }
  lStack_28 = 0;
  fStack_34 = 0.0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0xe0),param_2,&lStack_28,*(undefined8 *)PTR_DAT_04cbc4b8)
    ;
    if ((uVar2 & 1) == 0) {
      return;
    }
    fVar3 = (float)UnityEngine_Time__get_time_43cd540(0);
    if (*(long *)(param_1 + 0x138) != 0) {
      uVar2 = System_Collections_Generic_Dictionary_int__float___TryGetValue_343fc30
                        (*(long *)(param_1 + 0x138),param_2,&fStack_34,
                         *(undefined8 *)PTR_DAT_04cbb008);
      if (((uVar2 & 1) != 0) && (fVar3 - fStack_34 < _UNK_00e20a34)) {
        return;
      }
      if (*(long *)(param_1 + 0x138) != 0) {
        System_Collections_Generic_Dictionary_int__float___set_Item_343e2a4
                  (fVar3,*(long *)(param_1 + 0x138),param_2,*(undefined8 *)PTR_DAT_04cbb010);
        lVar1 = lStack_28;
        fVar3 = (float)Dino_BusSand_View_GameView__FillOf_23a5bd8(param_1,param_2);
        if (lVar1 != 0) {
          Dino_BusSand_View_VehicleView__Gulp_23fedc0(fVar3 * _UNK_00e20aec + _UNK_00e208d0,lVar1,0)
          ;
          uVar4 = Dino_BusSand_View_GameView__FillOf_23a5bd8(param_1,param_2);
          if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_Haptics__Tick_23888a4(uVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

