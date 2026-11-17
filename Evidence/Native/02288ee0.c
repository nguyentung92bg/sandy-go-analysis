/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$Spawn
UnityEngine_GameObject_o* Dino_BusSand_App_UI_ActivityQuitFlow__Spawn (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, UnityEngine_GameObject_o* prefab, UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityQuitFlow$$Spawn
   UnityEngine_GameObject_o* Dino_BusSand_App_UI_ActivityQuitFlow__Spawn
   (Dino_BusSand_App_UI_ActivityQuitFlow_o* __this, UnityEngine_GameObject_o* prefab,
   UnityEngine_Transform_o* parent, const MethodInfo* method); */

long Dino_BusSand_App_UI_ActivityQuitFlow__Spawn_2188ee0
               (long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b96c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadb30);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b96c = 1;
  }
  puVar3 = PTR_DAT_04cad390;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = UnityEngine_Object__Instantiate_object__2805310(param_2,param_3,0,*(undefined8 *)puVar3);
  if ((param_2 != 0) && (uVar5 = UnityEngine_Object__get_name_43c71a4(param_2,0), lVar4 != 0)) {
    UnityEngine_Object__set_name_43c72ec(lVar4,uVar5,0);
    lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
    if (cRam0000000004f9b65d == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65d = '\x01';
    }
    puVar2 = PTR_DAT_04caa208;
    if (lVar6 != 0) {
      puVar7 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      UnityEngine_Transform__set_localPosition_43cfda8(*puVar7,puVar7[1],puVar7[2],lVar6,0);
      lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar6 != 0) {
        lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0
                  (*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                   *(undefined4 *)(lVar8 + 0x14),lVar6,0);
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
        lVar6 = *(long *)(param_1 + 0x38);
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar10 = *(long *)PTR_DAT_04cadb30;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar4;
              thunk_FUN_02134474(plVar9,lVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            return lVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

