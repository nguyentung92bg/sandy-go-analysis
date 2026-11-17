/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Get<object>
Il2CppObject* Dino_BusSand_App_UI_UIManager__Get_object_ (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo_29451C8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Get<object>
   Il2CppObject* Dino_BusSand_App_UI_UIManager__Get_object_ (Dino_BusSand_App_UI_UIManager_o*
   __this, const MethodInfo_29451C8* method); */

long Dino_BusSand_App_UI_UIManager__Get_object__29451c8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b78);
    FUN_02132f7c(PTR_DAT_04cb1b80);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0216b4cc(param_2);
    }
  }
  puVar1 = PTR_DAT_04cb1b80;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar4 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
    if (-1 < iVar4 + -1) {
      do {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_02a45294;
        iVar4 = iVar4 + -1;
        uVar2 = System_Collections_Generic_List_object___get_Item_3a81924
                          (*(long *)(param_1 + 0x38),iVar4,*(undefined8 *)puVar1);
        lVar3 = **(long **)(param_2 + 0x38);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0216b470(lVar3);
        }
        lVar3 = thunk_FUN_0216e7a0(uVar2,lVar3);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x2c) == '\0')) {
          return lVar3;
        }
      } while (0 < iVar4);
    }
    return 0;
  }
LAB_02a45294:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

