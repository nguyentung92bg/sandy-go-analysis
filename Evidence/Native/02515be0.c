/* IL2CPP: Dino.BusSand.Core.Road$$Complete
void Dino_BusSand_Core_Road__Complete (Dino_BusSand_Core_Road_o* __this, Dino_BusSand_Core_RoadBus_o* b, System_Collections_Generic_List_SimEvent__o* evts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.Road$$Complete
   void Dino_BusSand_Core_Road__Complete (Dino_BusSand_Core_Road_o* __this,
   Dino_BusSand_Core_RoadBus_o* b, System_Collections_Generic_List_SimEvent__o* evts, const
   MethodInfo* method); */

void Dino_BusSand_Core_Road__Complete_2415be0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000004f9cb5f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb58d0);
    bRam0000000004f9cb5f = 1;
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x28) = 2;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xb8);
    Dino_BusSand_Core_SimEvent___ctor_241dc50(&uStack_68,0xc,*(undefined4 *)(param_2 + 0x10),0,0,0);
    puVar2 = PTR_DAT_04cb58d0;
    if (param_3 != 0) {
      lVar4 = *(long *)(param_3 + 0x10);
      lVar5 = *(long *)PTR_DAT_04cb58d0;
      *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(param_3 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
          *(uint *)(param_3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + 0x30) = uStack_58;
          *(undefined8 *)(lVar4 + 0x28) = uStack_60;
          *(undefined8 *)(lVar4 + 0x20) = uStack_68;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30),0);
        }
        else {
          uStack_48 = uStack_60;
          uStack_50 = uStack_68;
          uStack_40 = uStack_58;
          System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                    (param_3,&uStack_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        uVar3 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(param_1);
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        Dino_BusSand_Core_SimEvent___ctor_241dc50
                  (&uStack_80,0xf,uVar3,*(undefined4 *)(param_1 + 0x38),0,0);
        lVar4 = *(long *)(param_3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(param_3 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar1 * 0x18;
            *(uint *)(param_3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar4 + 0x30) = uStack_70;
            *(undefined8 *)(lVar4 + 0x28) = uStack_78;
            *(undefined8 *)(lVar4 + 0x20) = uStack_80;
            thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30),0);
          }
          else {
            uStack_48 = uStack_78;
            uStack_50 = uStack_80;
            uStack_40 = uStack_70;
            System_Collections_Generic_List_SimEvent___AddWithResize_3abfc80
                      (param_3,&uStack_50,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

