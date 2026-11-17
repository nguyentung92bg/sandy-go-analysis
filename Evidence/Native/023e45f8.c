/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Later
void Dino_BusSand_App_UI_HomeBus__Later (Dino_BusSand_App_UI_HomeBus_o* __this, float seconds, System_Action_o* a, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Later
   void Dino_BusSand_App_UI_HomeBus__Later (Dino_BusSand_App_UI_HomeBus_o* __this, float seconds,
   System_Action_o* a, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Later_22e45f8(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c412 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7250);
    FUN_02132f7c(PTR_DAT_04cb7218);
    FUN_02132f7c(PTR_DAT_04cb7258);
    bRam0000000004f9c412 = 1;
  }
  lVar5 = *(long *)(param_2 + 0xe8);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) < 8) {
      uStack_40 = 0;
      uStack_38 = 0;
      System_ValueTuple_float__object____ctor_30efd34
                (*(float *)(param_2 + 0x88) + param_1,&uStack_40,param_3,
                 *(undefined8 *)PTR_DAT_04cb7258);
      lVar3 = *(long *)(lVar5 + 0x10);
      lVar4 = *(long *)PTR_DAT_04cb7250;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_023e4700;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        lVar3 = lVar3 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar2 = (undefined8 *)(lVar3 + 0x28);
        *puVar2 = uStack_38;
        *(undefined8 *)(lVar3 + 0x20) = uStack_40;
        thunk_FUN_02134474(puVar2,0);
      }
      else {
        System_Collections_Generic_List_ValueTuple_float__object____AddWithResize_39c17e4
                  (lVar5,uStack_40,uStack_38,
                   *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
    return;
  }
LAB_023e4700:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

