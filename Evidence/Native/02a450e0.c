/* IL2CPP: Dino.BusSand.App.UI.UIManager$$CloseAll<object>
void Dino_BusSand_App_UI_UIManager__CloseAll_object_ (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo_29450E0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$CloseAll<object>
   void Dino_BusSand_App_UI_UIManager__CloseAll_object_ (Dino_BusSand_App_UI_UIManager_o* __this,
   const MethodInfo_29450E0* method); */

void Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b70);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0216b4cc(param_2);
    }
  }
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar1 = System_Collections_Generic_List_object___ToArray_3a83728
                        (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_04cb1b70), lVar1 != 0)) {
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar5 = 0;
      uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        uVar4 = *(undefined8 *)(lVar1 + 0x20 + uVar5 * 8);
        lVar2 = **(long **)(param_2 + 0x38);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0216b470(lVar2);
        }
        lVar2 = thunk_FUN_0216e7a0(uVar4,lVar2);
        if (lVar2 != 0) {
          Dino_BusSand_App_UI_UIManager__Close_21fe9a0(param_1,uVar4,0);
        }
        uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

