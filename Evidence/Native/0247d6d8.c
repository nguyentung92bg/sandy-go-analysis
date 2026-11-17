/* IL2CPP: Dino.BusSand.GameAssets$$Sprite
UnityEngine_Sprite_o* Dino_BusSand_GameAssets__Sprite (System_String_o* spriteName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$Sprite
   UnityEngine_Sprite_o* Dino_BusSand_GameAssets__Sprite (System_String_o* spriteName, const
   MethodInfo* method); */

long Dino_BusSand_GameAssets__Sprite_237d6d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lStack_38;
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c81a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c81a = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar9 = Dino_BusSand_GameAssets__get_Instance_2374c6c();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c813 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabf48);
    FUN_02132f7c(PTR_DAT_04cabf50);
    FUN_02132f7c(PTR_DAT_04cbb7d0);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabf60);
    FUN_02132f7c(PTR_DAT_04cac388);
    bRam0000000004f9c813 = 1;
  }
  lStack_38 = 0;
  plVar10 = (long *)(lVar9 + 0x70);
  lVar5 = *plVar10;
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(lVar9 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar5 = Dino_BusSand_GameAssets__Index_object__275a37c(uVar7,*(undefined8 *)PTR_DAT_04cbb7d0);
    *plVar10 = lVar5;
    thunk_FUN_02134474(plVar10,lVar5);
    lVar5 = *plVar10;
    if (lVar5 == 0) goto LAB_0247ceb4;
  }
  puVar2 = PTR_DAT_04cabf48;
  uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar5,param_1,&lStack_38,*(undefined8 *)PTR_DAT_04cabf48);
  puVar1 = PTR_DAT_04cabf60;
  if ((uVar8 & 1) != 0) {
    return lStack_38;
  }
  if (param_1 != 0) {
    uVar8 = System_String__EndsWith_46d07b4(param_1,*(undefined8 *)PTR_DAT_04cabf60,0);
    if ((uVar8 & 1) != 0) {
      lVar5 = *plVar10;
      uVar7 = System_String__Substring_46d4848(param_1,0,*(int *)(param_1 + 0x10) + -2,0);
      if (lVar5 == 0) goto LAB_0247ceb4;
      uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar5,uVar7,&lStack_38,*(undefined8 *)puVar2);
      if ((uVar8 & 1) != 0) {
        return lStack_38;
      }
    }
    lVar5 = *plVar10;
    uVar7 = System_String__Concat_46c82e0(param_1,*(undefined8 *)puVar1,0);
    if (lVar5 != 0) {
      uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar5,uVar7,&lStack_38,*(undefined8 *)puVar2);
      if ((uVar8 & 1) == 0) {
        plVar6 = (long *)Dino_BusSand_GameAssets__GetTexture_237ceb8(lVar9,param_1);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
        }
        uVar8 = UnityEngine_Object__op_Inequality_43c8dec(plVar6,0,0);
        if ((uVar8 & 1) != 0) {
          if (plVar6 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
            iVar4 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
            lStack_38 = UnityEngine_Sprite__Create_435118c
                                  (0,0,(float)iVar3,(float)iVar4,0x3f000000,0x3f000000,0x42c80000,
                                   plVar6,0);
            if (lStack_38 != 0) {
              UnityEngine_Object__set_name_43c72ec(lStack_38,param_1,0);
              if (*plVar10 != 0) {
                System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                          (*plVar10,param_1,lStack_38,*(undefined8 *)PTR_DAT_04cabf50);
                return lStack_38;
              }
            }
          }
          goto LAB_0247ceb4;
        }
        if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_GameAssets__Miss_237cae0(*(undefined8 *)PTR_DAT_04cac388,param_1);
        lStack_38 = 0;
      }
      return lStack_38;
    }
  }
LAB_0247ceb4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

