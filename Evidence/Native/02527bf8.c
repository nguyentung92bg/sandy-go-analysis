/* IL2CPP: Dino.BusSand.Core.StageEngine$$SaveFireTruck
void Dino_BusSand_Core_StageEngine__SaveFireTruck (Dino_BusSand_Core_StageEngine_o* __this, Dino_BusSand_Core_Truck_o* t, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.StageEngine$$SaveFireTruck
   void Dino_BusSand_Core_StageEngine__SaveFireTruck (Dino_BusSand_Core_StageEngine_o* __this,
   Dino_BusSand_Core_Truck_o* t, System_Collections_Generic_List_SimEvent__o* evts, const
   MethodInfo* method); */

void Dino_BusSand_Core_StageEngine__SaveFireTruck_2427bf8(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9cbad & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    FUN_02132f7c(PTR_DAT_04cbedf8);
    bRam0000000004f9cbad = 1;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (Dino_BusSand_Core_TruckGrid__Remove_2428d44(*(long *)(param_1 + 0x28),param_2), param_2 != 0))
  {
    uStack_58 = 0;
    uStack_68 = CONCAT44(*(undefined4 *)(param_2 + 0x10),2);
    uStack_60 = 2;
    thunk_FUN_02134474(&uStack_58,0);
    puVar2 = PTR_DAT_04cb58d0;
    if (param_3 != 0) {
      lVar3 = *(long *)(param_3 + 0x10);
      lVar4 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + 0x30) = uStack_58;
          *(undefined8 *)(lVar3 + 0x28) = uStack_60;
          *(undefined8 *)(lVar3 + 0x20) = uStack_68;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),0);
        }
        else {
          uStack_48 = uStack_60;
          uStack_50 = uStack_68;
          uStack_40 = uStack_58;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (param_3,&uStack_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        uStack_70 = 0;
        uStack_80 = CONCAT44(*(undefined4 *)(param_2 + 0x10),0x1f);
        thunk_FUN_02134474(&uStack_70,0);
        lVar3 = *(long *)(param_3 + 0x10);
        lVar4 = *(long *)puVar2;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        puVar2 = PTR_DAT_04cbedf8;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(param_3 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            lVar3 = lVar3 + (long)(int)uVar1 * 0x18;
            *(uint *)(param_3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar3 + 0x30) = uStack_70;
            *(undefined8 *)(lVar3 + 0x28) = 0;
            *(undefined8 *)(lVar3 + 0x20) = uStack_80;
            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),0);
          }
          else {
            uStack_48 = 0;
            uStack_50 = uStack_80;
            uStack_40 = uStack_70;
            System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                      (param_3,&uStack_50,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = *(long *)(param_1 + 0x28);
          lVar3 = FUN_02133068(*(undefined8 *)puVar2,1);
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            *(long *)(lVar3 + 0x20) = param_2;
            thunk_FUN_02134474((long *)(lVar3 + 0x20),param_2);
            if (lVar4 != 0) {
              Dino_BusSand_Core_TruckGrid__ApplyExit_24281d8(lVar4,lVar3,param_3);
              Dino_BusSand_Core_StageEngine__SyncStations_2428bbc(param_1,param_3);
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

